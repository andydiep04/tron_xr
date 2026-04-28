Shader "Tron/AnimatedBackground_Pro"
{
    Properties
    {
        [Header(Colors)]
        _SkyColor       ("Sky Color (deep)",    Color)  = (0.00, 0.02, 0.08, 1)
        _HorizonColor   ("Horizon Glow Color",  Color)  = (0.00, 0.15, 0.35, 1)
        _GridColor      ("Grid Line Color",     Color)  = (0.05, 0.55, 1.00, 1)
        _GridGlow       ("Grid Glow Intensity", Float)  = 3.0
        _StreakColor    ("Streak Color",        Color)  = (0.10, 0.80, 1.00, 1)
        _CityColor      ("City Silhouette",     Color)  = (0.02, 0.12, 0.28, 1)
        _CityGlowColor  ("City Edge Glow",      Color)  = (0.05, 0.45, 0.90, 1)

        [Header(Grid)]
        _GridScaleX     ("Grid Scale X",        Float)  = 20.0
        _GridScaleZ     ("Grid Scale Z",        Float)  = 20.0
        _GridLineWidth  ("Grid Line Width",      Float)  = 0.03
        _GridSpeed      ("Grid Scroll Speed",    Float)  = 0.25
        _GridFadeStart  ("Grid Fade Start",      Float)  = 0.3
        _GridFadeEnd    ("Grid Fade End",        Float)  = 0.7

        [Header(Streaks)]
        _StreakCount    ("Streak Column Count",  Float)  = 30.0
        _StreakSpeed    ("Streak Speed",         Float)  = 0.6
        _StreakLength   ("Streak Length",        Float)  = 0.18
        _StreakBrightness("Streak Brightness",   Float)  = 4.0

        [Header(City)]
        _CityHeight     ("City Height Scale",    Float)  = 0.12
        _CityColumns    ("City Column Count",    Float)  = 60.0
        _CityGlowWidth  ("City Edge Glow Width", Float)  = 0.02

        [Header(Atmosphere)]
        _ScanLineFreq   ("Scan Line Frequency",  Float)  = 80.0
        _ScanLineStrength("Scan Line Strength", Float)  = 0.06
        _HorizonBand    ("Horizon Band Width",    Float)  = 0.18
        _StarDensity    ("Star Density",          Float)  = 250.0
        _StarBlink      ("Star Blink Speed",      Float)  = 1.5
    }

    SubShader
    {
        Tags
        {
            "RenderType"     = "Background"
            "RenderPipeline" = "UniversalPipeline"
            "Queue"          = "Background"
        }

        Cull Front
        ZWrite Off

        Pass
        {
            Name "TronBackgroundPro"
            Tags { "LightMode" = "UniversalForward" }

            HLSLPROGRAM
            #pragma vertex   vert
            #pragma fragment frag
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv         : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionHCS : SV_POSITION;
                float3 localPos    : TEXCOORD0;
                float2 uv          : TEXCOORD1;
            };

            float4 _SkyColor, _HorizonColor, _GridColor, _StreakColor, _CityColor, _CityGlowColor;
            float  _GridGlow, _GridScaleX, _GridScaleZ, _GridLineWidth, _GridSpeed;
            float  _GridFadeStart, _GridFadeEnd;
            float  _StreakCount, _StreakSpeed, _StreakLength, _StreakBrightness;
            float  _CityHeight, _CityColumns, _CityGlowWidth;
            float  _ScanLineFreq, _ScanLineStrength, _HorizonBand;
            float  _StarDensity, _StarBlink;

            float hash11(float p) { return frac(sin(p * 127.1) * 43758.5453); }
            float hash12(float2 p) { return frac(sin(dot(p, float2(127.1, 311.7))) * 43758.5453); }

            float gridLine(float coord, float lineWidth)
            {
                float f  = abs(frac(coord - 0.5) - 0.5);
                float df = fwidth(coord);
                return 1.0 - smoothstep(lineWidth - df, lineWidth + df, f);
            }

            Varyings vert(Attributes IN)
            {
                Varyings OUT;
                OUT.positionHCS = TransformObjectToHClip(IN.positionOS.xyz);
                OUT.localPos    = IN.positionOS.xyz;
                OUT.uv          = IN.uv;
                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                float3 dir = normalize(IN.localPos);
                float elevation = dir.y;
                float azimuth   = atan2(dir.z, dir.x) / (2.0 * 3.14159265);
                float2 skyUV    = float2(azimuth, elevation * 0.5 + 0.5);

                // 1. SKY & HORIZON HAZE
                float horizonFactor = exp(-abs(elevation) / _HorizonBand);
                float3 baseSky = lerp(_SkyColor.rgb, _HorizonColor.rgb, horizonFactor * 0.8);
                baseSky = lerp(baseSky, _SkyColor.rgb * 0.3, saturate(-elevation * 3.0));
                
                // Add volumetric horizon haze for depth
                float haze = exp(-abs(elevation + 0.05) / 0.06);
                float3 horizonHaze = _HorizonColor.rgb * haze * 0.5;

                // 2. PERSPECTIVE GRID WITH PULSE
                float safeY    = min(dir.y, -0.0001);
                float t        = -1.0 / safeY;
                float2 floorXZ = dir.xz * t;
                floorXZ.y     += _Time.y * _GridSpeed;
                float2 gridUV  = floorXZ * float2(1.0 / _GridScaleX, 1.0 / _GridScaleZ);
                
                float lineX    = gridLine(gridUV.x, _GridLineWidth);
                float lineZ    = gridLine(gridUV.y, _GridLineWidth);
                
                // Data pulse logic
                float pulse = frac(gridUV.y - _Time.y * _GridSpeed * 3.0);
                float pulseIntensity = smoothstep(0.12, 0.0, pulse) * 2.0; 

                float gridLine2 = max(lineX, lineZ);
                float perspFade  = 1.0 - saturate((t - _GridFadeStart) / (_GridFadeEnd - _GridFadeStart));
                float floorMask  = saturate(-elevation * 8.0);
                float gridContrib = gridLine2 * perspFade * perspFade * floorMask;
                float3 gridColor = _GridColor.rgb * (_GridGlow + pulseIntensity) * gridContrib;

                // 3. DIGITAL STREAKS WITH FLICKER
                float col      = floor(azimuth * _StreakCount);
                float colFrac  = frac(azimuth * _StreakCount);
                float speed    = hash11(col) * 0.8 + 0.2;
                float phase    = frac(hash11(col + 99.7) + _Time.y * _StreakSpeed * speed);
                float streakDist = abs((elevation * 0.5 + 0.5) - (1.0 - phase));
                float streak     = saturate(1.0 - streakDist / _StreakLength);
                
                float flicker = step(0.05, sin(_Time.y * 15.0 * speed));
                float streakWidth = saturate(1.0 - abs(colFrac - 0.5) * (6.0 + sin(col) * 2.0));
                float brightness = step(0.35, hash11(col + 7.3));
                float wallMask   = saturate(1.0 - abs(elevation) * 2.5);
                float3 streakColor = _StreakColor.rgb * _StreakBrightness * streak * streak * streakWidth * brightness * wallMask * flicker;

                // 4. CITY SILHOUETTE
                float cityCol   = floor(azimuth * _CityColumns);
                float buildingH = hash11(cityCol) * _CityHeight + 0.01;
                float insideH   = step(elevation, 0.0) * step(-buildingH, elevation);
                float edgeDist  = abs(elevation + buildingH);
                float cityGlow  = exp(-edgeDist / _CityGlowWidth) * (1.0 - insideH);
                float3 cityColor = _CityColor.rgb * insideH + _CityGlowColor.rgb * cityGlow * 3.0;

                // 5. ENHANCED STARS
                float2 starUV   = skyUV * _StarDensity;
                float2 starCell = floor(starUV);
                float  starHash = hash12(starCell);
                float2 starPos  = float2(hash12(starCell + 0.1), hash12(starCell + 0.2));
                float  starDot  = 1.0 - smoothstep(0.0, 0.08 + hash12(starCell + 0.3) * 0.08, length(frac(starUV) - starPos));
                float  blink    = sin(_Time.y * _StarBlink + hash12(starCell + 0.5) * 6.28) * 0.4 + 0.6;
                
                float nodeFlicker = step(0.985, starHash);
                float3 starColorBase = lerp(float3(1,1,1), _GridColor.rgb, nodeFlicker);
                float starMask  = step(0.97, starHash) * saturate((elevation - 0.1) / 0.3);
                float3 starColor = starColorBase * starDot * blink * starMask * 2.5;

                // 6. COMPOSITE & POST
                float scanLine = sin(skyUV.y * _ScanLineFreq * 3.14159) * 0.5 + 0.5;
                float3 finalCol = baseSky + gridColor + streakColor + cityColor + starColor + horizonHaze;
                finalCol *= (1.0 - scanLine * _ScanLineStrength);

                finalCol = finalCol / (finalCol + 0.5);
                finalCol = pow(max(finalCol, 0.0), 0.9);

                return half4(finalCol, 1.0);
            }
            ENDHLSL
        }
    }
}
