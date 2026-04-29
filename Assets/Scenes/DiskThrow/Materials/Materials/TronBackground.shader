Shader "Tron/AnimatedBackground_Pro"
{
    Properties
    {
        // Core palette
        _SkyDark         ("Sky Dark",          Color) = (0.01, 0.00, 0.01, 1)
        _SkyMid          ("Sky Mid",           Color) = (0.06, 0.01, 0.02, 1)
        _CloudColor      ("Cloud Color",       Color) = (0.10, 0.02, 0.02, 1)
        _CloudBright     ("Cloud Bright",      Color) = (0.22, 0.04, 0.03, 1)
        _NeonColor       ("Neon Red",          Color) = (1.00, 0.06, 0.03, 1)
        _NeonBright      ("Neon Bright",       Color) = (1.00, 0.35, 0.20, 1)
        _FogColor        ("Ground Fog",        Color) = (0.18, 0.01, 0.00, 1)
        _EmberColor      ("Ember Color",       Color) = (1.00, 0.30, 0.05, 1)
        _LightningColor  ("Lightning Color",   Color) = (1.00, 0.50, 0.40, 1)
        _WindowColor     ("Building Window",   Color) = (1.00, 0.40, 0.10, 1)

        // Intensities
        _NeonGlow        ("Neon Glow",         Float) = 5.0
        _FogDensity      ("Fog Density",       Float) = 1.8
        _CloudDensity    ("Cloud Density",     Float) = 4.0
        _CloudSpeed      ("Cloud Speed",       Float) = 0.04
        _LightningFreq   ("Lightning Freq",    Float) = 0.8
        _LightningBright ("Lightning Bright",  Float) = 3.0
        _EmberCount      ("Ember Count",       Float) = 120.0
        _EmberSpeed      ("Ember Speed",       Float) = 0.05
        _EmberBright     ("Ember Bright",      Float) = 3.0

        // Grid / circuit
        _GridScale       ("Grid Scale",        Float) = 18.0
        _GridWidth       ("Grid Line Width",   Float) = 0.025
        _GridGlow        ("Grid Glow",         Float) = 6.0
        _GridSpeed       ("Grid Speed",        Float) = 0.15
        _CircuitScale    ("Circuit Scale",     Float) = 3.0
        _CircuitGlow     ("Circuit Glow",      Float) = 2.5

        // Buildings
        _CityColumns     ("City Columns",      Float) = 60.0
        _CityHeight      ("City Max Height",   Float) = 0.28
        _CityLayers      ("City Layers",       Float) = 5.0
        _NeonEdgeWidth   ("Neon Edge Width",   Float) = 0.018
        _WindowDensity   ("Window Density",    Float) = 10.0
        _WindowBlink     ("Window Blink",      Float) = 0.3

        // Misc
        _ScanStrength    ("Scan Strength",     Float) = 0.03
        _Vignette        ("Vignette",          Float) = 0.5
    }

    SubShader
    {
        Tags { "RenderType"="Background" "RenderPipeline"="UniversalPipeline" "Queue"="Background" }
        Cull Front
        ZWrite Off

        Pass
        {
            Name "TronAresRealistic"
            Tags { "LightMode"="UniversalForward" }
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes { float4 positionOS : POSITION; };
            struct Varyings   { float4 positionHCS : SV_POSITION; float3 localPos : TEXCOORD0; };

            float4 _SkyDark,_SkyMid,_CloudColor,_CloudBright,_NeonColor,_NeonBright;
            float4 _FogColor,_EmberColor,_LightningColor,_WindowColor;
            float  _NeonGlow,_FogDensity,_CloudDensity,_CloudSpeed,_LightningFreq,_LightningBright;
            float  _EmberCount,_EmberSpeed,_EmberBright;
            float  _GridScale,_GridWidth,_GridGlow,_GridSpeed,_CircuitScale,_CircuitGlow;
            float  _CityColumns,_CityHeight,_CityLayers,_NeonEdgeWidth,_WindowDensity,_WindowBlink;
            float  _ScanStrength,_Vignette;

            // ── Hash / Noise ────────────────────────────────────────────────
            float h11(float p)  { return frac(sin(p*127.1)*43758.5453); }
            float h12(float2 p) { return frac(sin(dot(p,float2(127.1,311.7)))*43758.5453); }
            float h13(float3 p) { return frac(sin(dot(p,float3(127.1,311.7,74.7)))*43758.5453); }

            float2 h22(float2 p)
            {
                p = float2(dot(p,float2(127.1,311.7)),dot(p,float2(269.5,183.3)));
                return frac(sin(p)*43758.5453);
            }

            // Smooth value noise
            float vn2(float2 p)
            {
                float2 i=floor(p); float2 f=frac(p); float2 u=f*f*(3.0-2.0*f);
                return lerp(lerp(h12(i),h12(i+float2(1,0)),u.x),
                            lerp(h12(i+float2(0,1)),h12(i+float2(1,1)),u.x),u.y);
            }

            // 3 octave FBM
            float fbm(float2 p)
            {
                float v=0.0,a=0.5;
                for(int i=0;i<4;i++){ v+=a*vn2(p); p=p*2.1+float2(1.7,9.2); a*=0.5; }
                return v;
            }

            // AA grid line — safe, no if-block
            float gline(float c, float w)
            {
                float f=abs(frac(c-0.5)-0.5); float d=fwidth(c);
                return 1.0-smoothstep(w-d,w+d,f);
            }

            // ── Circuit board trace pattern ──────────────────────────────────
            // Generates L-shaped branching traces on a grid
            float circuitTrace(float2 uv)
            {
                float2 cell = floor(uv);
                float2 fr   = frac(uv);
                float  ch   = h12(cell);
                float  ch2  = h12(cell+float2(3.7,1.3));

                // Randomly choose trace direction per cell
                float traceH = step(fr.y, 0.5+ch*0.0) * step(0.5+ch*0.0, fr.y+0.04);  // horizontal line
                float traceV = step(fr.x, 0.5+ch2*0.0) * step(0.5+ch2*0.0, fr.x+0.04); // vertical line

                // Connector pads at corners
                float pad = step(length(fr-float2(0.5,0.5)), 0.08);

                // Branch: short stub going to edge
                float2 dir = step(float2(0.5,0.5), h22(cell));
                float stubH = step(fr.y, 0.52) * step(0.48, fr.y) * step(fr.x, dir.x*0.5+0.02);
                float stubV = step(fr.x, 0.52) * step(0.48, fr.x) * step(fr.y, dir.y*0.5+0.02);

                return saturate(traceH + traceV + pad*2.0 + stubH + stubV);
            }

            Varyings vert(Attributes IN)
            {
                Varyings OUT;
                OUT.positionHCS = TransformObjectToHClip(IN.positionOS.xyz);
                OUT.localPos = IN.positionOS.xyz;
                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                float3 dir  = normalize(IN.localPos);
                float  elev = dir.y;
                float  az   = atan2(dir.z,dir.x)/6.28318; // 0..1

                // ── 1. SKY + VOLUMETRIC CLOUDS ───────────────────────────────
                float zt   = saturate(elev);
                float3 sky = lerp(_SkyMid.rgb, _SkyDark.rgb, zt*zt);
                // Below horizon: pure dark
                sky = lerp(sky, _SkyDark.rgb*0.3, saturate(-elev*6.0));

                // Stormy cloud layer — only in upper hemisphere
                // Project sphere dir onto a flat cloud plane at y=0.3
                float cloudPlaneY = 0.25;
                float ct = (elev > 0.001) ? (cloudPlaneY / elev) : 999.0;
                float2 cloudUV = float2(dir.x, dir.z) * ct * 0.15;
                cloudUV += float2(_Time.y*_CloudSpeed, _Time.y*_CloudSpeed*0.6);

                float cloud = fbm(cloudUV*_CloudDensity);
                cloud = smoothstep(0.3, 0.75, cloud); // threshold into fluffy shapes

                // Cloud color: dark storm grey with red underlighting
                float cloudElev = saturate(elev*3.0); // clouds only above horizon
                float3 cloudCol = lerp(_CloudBright.rgb, _CloudColor.rgb, cloud*0.7);
                cloudCol *= cloud * cloudElev;

                // Red underlighting on cloud bottoms (reflected city glow)
                float cloudBottom = (1.0-cloud)*0.4 * cloudElev * saturate(1.0-elev*4.0);
                cloudCol += _NeonColor.rgb * cloudBottom * 0.3;

                sky += cloudCol;

                // Thin red horizon glow
                float horizGlow = exp(-abs(elev+0.01)/0.06);
                sky += _NeonColor.rgb * horizGlow * 0.4;

                // ── 2. LIGHTNING IN CLOUDS ───────────────────────────────────
                // Periodic bright flash that illuminates cloud edges
                float lPhase    = floor(_Time.y*_LightningFreq);
                float lRand     = h11(lPhase);
                float lFlash    = step(0.75, lRand) * exp(-frac(_Time.y*_LightningFreq)*3.0);
                // Branch noise for lightning bolt shape
                float lNoise    = fbm(float2(az*8.0+lPhase, elev*4.0)) * 2.0;
                float lBolt     = exp(-abs(lNoise-1.0)*4.0) * cloud * cloudElev;
                float3 lightning = _LightningColor.rgb * lBolt * lFlash * _LightningBright;
                sky += lightning;

                // Global flash: briefly brightens entire sky on lightning strike
                sky += _NeonColor.rgb * lFlash * 0.08 * cloudElev;

                // ── 3. GRID + CIRCUIT FLOOR ──────────────────────────────────
                float sy   = min(dir.y, -0.0001);
                float tf   = -1.0/sy; // ray distance to floor
                float2 fxz = dir.xz * tf;

                // Primary grid
                float2 guv = fxz * (1.0/_GridScale);
                guv.y     -= _Time.y*_GridSpeed;
                float gx   = gline(guv.x, _GridWidth);
                float gz   = gline(guv.y, _GridWidth);
                float grid = max(gx, gz);

                // Circuit traces on sub-cells
                float2 cuv   = fxz * (1.0/_GridScale) * _CircuitScale;
                cuv.y       -= _Time.y*_GridSpeed*_CircuitScale;
                float circuit = circuitTrace(cuv) * (1.0-grid); // traces fill between grid lines

                // Perspective + distance fade
                float pf    = pow(saturate(1.0-(tf-2.0)/30.0), 2.5);
                float fm    = saturate(-elev*12.0);

                // Near floor: vivid circuit traces; far: fades to dark
                float3 gridcol = _NeonColor.rgb * _GridGlow * grid * pf * fm;
                gridcol += _NeonColor.rgb * _CircuitGlow * circuit * pf * fm * 0.6;

                // Ground-level data pulse racing along Z axis
                float pulse = exp(-frac(guv.y*0.3 - _Time.y*0.8)*frac(guv.y*0.3 - _Time.y*0.8)*40.0);
                gridcol += _NeonBright.rgb * pulse * gz * pf * fm * 2.0;

                // Ground fog: thick red mist pooling near floor
                float fogHeight = saturate(1.0 + elev*8.0); // thick near floor, thin at horizon
                float fogDist   = saturate(1.0 - tf/25.0);  // thicker far away
                float3 groundFog = _FogColor.rgb * fogHeight * (1.0-fogDist*fogDist) * _FogDensity * fm * 0.5;
                gridcol += groundFog;

                // ── 4. BUILDINGS WITH NEON OUTLINES ─────────────────────────
                // Multiple depth layers — far ones fogged and smaller
                float3 totalCity = float3(0,0,0);

                // Render 5 city depth layers
                for(int L=0; L<5; L++)
                {
                    float lf      = (float)L; // 0=near, 4=far
                    float scale   = 1.0 + lf*1.2;
                    float fogAmt  = lf * 0.18 * _FogDensity;
                    float dimAmt  = exp(-lf*0.55); // brightness falloff

                    float cols    = _CityColumns * scale;
                    float azOff   = lf * 0.0047; // slight offset per layer
                    float cc      = floor((az+azOff)*cols);
                    float ccf     = frac((az+azOff)*cols);
                    float bh      = h11(cc+lf*33.7)*_CityHeight/scale + 0.01;

                    // Building is in the horizon band (below 0, above -bh)
                    float inBuild = step(elev, 0.0) * step(-bh, elev);

                    // Building FACE: dark — almost black (just slight red tint)
                    float3 face  = _SkyDark.rgb * 0.5 * inBuild;

                    // NEON OUTLINE: bright red edges only
                    // Top edge
                    float topEdge  = exp(-abs(elev+bh)/_NeonEdgeWidth) * (1.0-inBuild);
                    // Side edges
                    float leftEdge  = exp(-abs(ccf-0.01)/(_NeonEdgeWidth*0.3)) * inBuild;
                    float rightEdge = exp(-abs(ccf-0.99)/(_NeonEdgeWidth*0.3)) * inBuild;
                    // Mid-building horizontal accent lines (every ~15% of height)
                    float elevN   = (-elev) / max(bh, 0.001); // 0=roof, 1=base
                    float accentH = step(0.85, frac(elevN * 5.0)) * inBuild * 0.4;

                    float3 neonEdge = _NeonColor.rgb * (topEdge*5.0 + leftEdge*3.0 + rightEdge*3.0 + accentH) * _NeonGlow;

                    // Stepped building profile (setbacks like real skyscrapers)
                    float stepLevel = floor(elevN*3.0)/3.0;
                    float stepH2    = bh * (1.0 - stepLevel*0.25);
                    float setback   = step(abs(ccf-0.5), 0.5-stepLevel*0.08);
                    float inStep    = inBuild * setback;
                    float stepEdge  = exp(-abs(elev+stepH2*0.67)/_NeonEdgeWidth) * setback * (1.0-inBuild+0.3);

                    // Windows: sparse lit rectangles, amber-orange
                    float2 wuv  = float2(ccf*_WindowDensity, elevN*(_WindowDensity*0.6));
                    float2 wc   = floor(wuv);
                    float  wh   = h12(wc+float2(cc+lf*7.0,0));
                    float  won  = step(0.60,wh) * inStep; // 40% of windows lit
                    float  wbl  = step(0.5,sin(_Time.y*_WindowBlink*(0.15+wh)+wh*6.28)*0.5+0.5);
                    float2 wf   = frac(wuv);
                    float  wr   = step(0.1,wf.x)*step(wf.x,0.9)*step(0.15,wf.y)*step(wf.y,0.85);
                    float3 wins = _WindowColor.rgb*wr*won*wbl;

                    // Apply fog: far buildings fade toward fog color
                    float3 layerCol = face + neonEdge + stepEdge*_NeonColor.rgb*2.0 + wins;
                    layerCol = lerp(layerCol, _FogColor.rgb*inBuild, saturate(fogAmt));
                    layerCol *= dimAmt;

                    totalCity += layerCol;
                }

                // City atmospheric haze — red fog pooling at street level
                float cityHaze  = exp(-abs(elev+0.005)/0.035);
                totalCity += _FogColor.rgb * cityHaze * _FogDensity * 0.6;

                // ── 5. EMBERS ────────────────────────────────────────────────
                // Larger, more visible sparks drifting upward
                float2 euv  = float2(az*_EmberCount, (elev*0.5+0.5)*_EmberCount*0.35);
                float2 ec   = floor(euv);
                float  eh   = h12(ec);
                float  eph  = frac(eh*4.1+_Time.y*_EmberSpeed*(0.4+eh*0.7));
                float2 ep   = float2(h12(ec+0.5), eph);
                float  erad = 0.04+h12(ec+0.9)*0.05; // varied ember sizes
                float  edot = 1.0-smoothstep(0.0, erad, length(frac(euv)-ep));
                // Embers visible in mid-height band (not floor, not sky)
                float  emk  = saturate(1.0-abs(elev)*1.8)*saturate(elev*4.0+0.5);
                float  efl  = (sin(_Time.y*7.0*eh+eh*20.0)*0.5+0.5);
                efl         = efl*efl; // sharper flicker
                float  eact = step(0.78,eh); // ~22% density
                float3 embers = lerp(_EmberColor.rgb,float3(1,0.8,0.5),eh)
                              * edot * eact * emk * efl * _EmberBright;

                // ── 6. SUBTLE SCAN LINES ─────────────────────────────────────
                float2 scrUV = float2(az, elev*0.5+0.5);
                float scan   = 1.0-(sin(scrUV.y*150.0*3.14159)*0.5+0.5)*_ScanStrength;

                // ── 7. VIGNETTE ───────────────────────────────────────────────
                float vig = 1.0-saturate(abs(elev)*_Vignette);

                // ── COMPOSITE ────────────────────────────────────────────────
                float3 col = sky + gridcol + totalCity + embers;
                col *= scan * vig;

                // ACES-inspired filmic tone map — richer contrast than Reinhard
                float3 x = max(col-0.004,0.0);
                col = (x*(6.2*x+0.5))/(x*(6.2*x+1.7)+0.06);

                return half4(col,1.0);
            }
            ENDHLSL
        }
    }
}
