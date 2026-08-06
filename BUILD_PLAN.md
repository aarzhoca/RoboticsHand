# Phased Build Plan

## Overview

This plan breaks the robotic hand project into four clear phases:

- **Phase 0:** Preparation and setup
- **Phase 1:** Core mechanical and electrical bring-up
- **Phase 2:** Firmware, motion, and control
- **Phase 3:** Integration, polish, and documentation

Each phase has specific goals, deliverables, and a checklist. You can treat each phase as a milestone for your nephew’s training program.

---

## Phase 0 — Preparation and Setup

### Goals

- Confirm all parts and tools.
- Set up the development environment.
- Understand the mechanical and electrical architecture.

### Tasks

- **Procurement**
  - Order NuMaker-M258KG.
  - Order Amazing Hand kit.
  - Order 8 × Feetech SCS0009 servos.
  - Order power supply and capacitor.
  - Order wiring, connectors, and small hardware.

- **Environment**
  - Install Nuvoton toolchain and IDE (e.g., Keil, IAR, or open-source toolchain as supported by Nuvoton).
  - Install Nu-Link2 drivers for on-board debugger.
  - Set up a Git repo with the structure you created earlier (README, BOM, firmware, docs, training).

- **Study**
  - Read the Amazing Hand documentation and GitHub repo.
  - Review the NuMaker-M258KG user manual and example projects.
  - Review the SCS0009 servo protocol and example code from Feetech.

### Deliverables

- Working dev environment (IDE, debugger, drivers).
- Git repo with basic structure and BOM.
- A short design note describing:
  - Mechanical layout.
  - Power distribution concept.
  - Firmware layering concept.

---

## Phase 1 — Mechanical and Electrical Bring-Up

### Goals

- Assemble the hand mechanically.
- Wire the power distribution and first servo.
- Validate basic servo motion.

### Tasks

- **Mechanical assembly**
  - Print or unpack the hand parts.
  - Assemble fingers and palm.
  - Mount servos in the designated locations.
  - Route tendons or linkages as specified by the hand design.

- **Electrical setup**
  - Build the power distribution:
    - 5 V supply -> servo rail.
    - Add bulk capacitor near the servo rail.
  - Wire the first servo to the servo rail and to the MCU signal line.
  - Ensure common ground between MCU and servo supply.

- **Initial servo test**
  - Use a simple example program to:
    - Initialize the MCU.
    - Configure a timer or UART for servo control.
    - Command a single servo to move between two positions.

### Deliverables

- A mechanically assembled hand with all servos mounted.
- A working power system with at least one servo verified.
- A simple “hello servo” firmware example that moves one servo.

---

## Phase 2 — Firmware, Motion, and Control

### Goals

- Implement full servo control for all 8 servos.
- Develop a motion-control layer.
- Validate basic hand poses and gestures.

### Tasks

- **Servo control layer**
  - Implement a driver for the SCS0009 serial bus protocol:
    - Initialization.
    - Position set commands.
    - Status readback (position, current, temperature).
  - Create a unified servo API:
    - `set_position(id, angle)`
    - `get_position(id)`
    - `set_limits(id, min, max)`

- **Motion control layer**
  - Define a pose data structure:
    - One angle per DOF.
  - Implement basic pose primitives:
    - Open hand.
    - Close hand.
    - Neutral / rest pose.
  - Add trajectory generation:
    - Linear interpolation between poses.
    - Speed control.

- **Command interface**
  - Implement a simple serial command protocol:
    - `OPEN`
    - `CLOSE`
    - `POSE a1 a2 ... a8`
  - Add basic error handling and acknowledgments.

- **Testing**
  - Test each servo individually.
  - Test coordinated motion of multiple servos.
  - Validate pose transitions and limits.

### Deliverables

- A working servo driver for all 8 servos.
- A motion-control layer that can execute open, close, and custom poses.
- A serial command interface for manual testing.

---

## Phase 3 — Integration, Polish, and Documentation

### Goals

- Integrate the full system.
- Improve robustness and usability.
- Complete documentation for reproducibility.

### Tasks

- **System integration**
  - Connect all servos to the MCU.
  - Run full-hand motion sequences.
  - Test with different objects and grip patterns.

- **Robustness improvements**
  - Add startup calibration routine.
  - Add soft limits and safety checks.
  - Improve wiring and cable management.
  - Add fault detection (e.g., current over-limit, temperature).

- **Documentation**
  - Write assembly instructions.
  - Document wiring and pin mapping.
  - Document calibration and troubleshooting.
  - Add photos or short videos of the build in action.

- **Optional: Teleoperation**
  - If you want glove control:
    - Build the flex-sensor glove.
    - Implement glove-side firmware.
    - Integrate glove input with hand motion control.

### Deliverables

- A fully functional robotic hand system.
- Complete documentation in the repo.
- Optional: glove-based teleoperation demo.

---

## Milestones and checkpoints

### Milestone 1 (end of Phase 1)

- One servo moves reliably under MCU control.
- Power system validated.
- Mechanical assembly complete.

### Milestone 2 (mid Phase 2)

- All 8 servos controllable.
- Basic poses (open/close/neutral) working.

### Milestone 3 (end of Phase 2)

- Full motion-control layer functional.
- Serial command interface working.

### Milestone 4 (end of Phase 3)

- Complete integrated system.
- Documentation and demo ready for GitHub.

---

## Suggested timeline (example)

You can adapt this to your nephew’s schedule, but a simple split might be:

- **Phase 0:** 1–2 weeks
- **Phase 1:** 2–3 weeks
- **Phase 2:** 3–4 weeks
- **Phase 3:** 2–3 weeks

Total: roughly **8–12 weeks**, matching your original training plan concept.

---

## Next steps

If you want, I can next:

- Turn this into a **`training/`** folder with weekly tasks aligned to these phases.
- Generate a **`docs/architecture.md`** file that describes the firmware layers in more detail.
- Create a **`firmware/`** skeleton with stubs for each layer (servo driver, motion control, command interface).