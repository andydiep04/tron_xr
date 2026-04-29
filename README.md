# TRON XR

A Meta Quest 3 VR game built in Unity. Players throw illuminated Tron-style disks at floating targets and enemies inside a destructible mixed-reality room. Hit all the targets to win — without getting killed first.

---

## Gameplay

### Objective
Hit all 20 floating targets (turn them from red/spiky to smooth/blue) before losing all 3 lives.

### Controls

| Input | Action |
|-------|--------|
| Grip Trigger (either hand) | Charge and throw disk |
| Button A / X | Toggle light sword (right/left hand) |
| Left Primary Trigger (hold) | Hold grenade |
| Left Primary Trigger (release) | Throw grenade |
| Left Primary Trigger (click, after throw) | Detonate grenade |
| Left Menu Button | Pause / Resume |
| Left Y Button | Reset game (while paused or game over/win) |

### Weapons

**Disk** — Primary weapon. Thrown with hand velocity. Bounces off surfaces. Frisbee physics (lift based on angle and speed). One-shots Gridbugs, deals 1 damage to Recognizers, destroys wall segments.

**Light Sword** — Hold A/X to extend. Melee range. Kills Gridbugs, deals 1 damage to Recognizers.

**Grenade** — Left hand. Hold grip to carry, release to throw, click to detonate. 1m blast radius. Destroys wall segments, kills Gridbugs, damages Recognizers, swaps targets caught in the blast.

### Scoring

| Event | Points |
|-------|--------|
| Target hit | +1 |
| Gridbug kill | +1 |
| Recognizer kill | +5 |

### Win / Lose

- **Win:** All 20 targets turned blue → YOU WIN screen appears
- **Lose:** All 3 lives lost → GAME OVER screen appears
- **Reset:** Y button from any end screen restarts everything (score, lives, targets, walls, enemies)

---

## Enemies

### Gridbug
Small crawling bugs that spawn from wall breaches. Walk along room surfaces (walls, floor, ceiling) toward the player. Can drop from the ceiling onto the player. Contact deals 1 life. 1 hit to kill (disk, sword, or grenade). Worth 1 point.

- 2 spawn per wall breach (3.5% chance per break)
- Max 10 alive at once
- 0.6s spawn immunity (won't instantly die to the disk that broke the wall)

### Recognizer
Large stationary enemies that appear in the void behind broken walls. Fire slow projectiles at the player every 3 seconds. 3 hits to kill. Worth 5 points.

- 5% spawn chance per lower-wall break
- Max 3 alive at once
- Minimum 3m spacing between them
- Projectiles travel at 2 m/s and can be deflected by a moving disk or sword

---

## Environment

The room walls and floor are destructible (powered by Meta MRUK). Throwing a disk at a wall breaks a segment. Enough breaks expose gaps through which Gridbugs and Recognizers can spawn. Walls reset on game restart.

---

## Project Structure

```
Assets/Scenes/DiskThrow/
├── GameManager.cs              # Game state: score, lives, win/lose events
├── GameUI.cs                   # HUD: score, lives, pause/game over/win canvases
├── DiskThrower.cs              # Disk spawn and throw velocity calculation
├── DiskPhysics.cs              # Frisbee lift, bounce, enemy collision
├── DiskWallPortal.cs           # Disk → wall destruction trigger
├── TronStaffController.cs      # Light sword toggle and grow animation
├── TronGrenadeLauncher.cs      # Grenade spawn, hold, throw, detonate
├── AresGrenade.cs              # Grenade explosion: radius damage, wall break
├── GridbugEnemy.cs             # Gridbug AI: surface crawl, void walk, drop attack
├── GridbugSpawner.cs           # Spawns Gridbugs from wall breaches
├── RecognizerEnemy.cs          # Recognizer AI: stationary, fires projectiles
├── RecognizerSpawner.cs        # Spawns Recognizers from wall breaches
├── RecognizerProjectile.cs     # Slow-moving projectile, deflectable
├── targetSpawn.cs              # Spawns and floats the 20 bit targets
├── TargetModelSwap.cs          # Handles bit hit: model swap, score, win check
├── TargetHitColor.cs           # Visual hit feedback on targets
├── DestructibleGlobalMeshManager.cs  # MRUK wall mesh management
├── HandAnimatorController.cs   # Hand grip/trigger animation parameters
└── UIButtonSound.cs            # UI button click audio
```

---

## Dependencies

- **Meta XR SDK** v85.0.0 — OVRInput, OVRCameraRig, hand tracking
- **Meta MRUK** — Mixed Reality Utility Kit for room mesh and destructible geometry
- **XR Interaction Toolkit** v3.3.1
- **XR Hands** v1.7.3
- **OpenXR** v1.16.1
- **Universal Render Pipeline (URP)** v17.3.0
- **TextMeshPro** — HUD text rendering
- **Unity Input System** v1.14.2

**Target Platform:** Meta Quest 2 / 3 / Pro

---

## Setup

1. Clone the repo and open in Unity 6
2. Install packages via `Packages/manifest.json` (restored automatically)
3. Ensure Meta XR SDK and MRUK are configured in Project Settings → XR Plug-in Management
4. Open `Assets/Scenes/DiskThrow.unity`
5. Build target: Android (Meta Quest)

> MRUK requires a real device or Link for room mesh data. In the Unity Editor, enable `testSpawnMode` on `GridbugSpawner` and `RecognizerSpawner` to test enemies without a room scan.
