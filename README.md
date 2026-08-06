<<<<<<< HEAD
# Glove-Controlled 3D-Printed Robotic Hand (NuMaker-M258KG + Amazing Hand)

An entry-level, non-Arduino robotic hand project using:

- **Nuvoton NuMaker-M258KG** as the main MCU board.
- **Amazing Hand** as the open-source 3D-printable robotic hand platform.
- **Feetech SCS0009** serial bus servos (8 DOF).
- A **flex-sensor glove** for teleoperation (optional).

This project is designed as a structured **8–12 week training program** for a college sophomore learning embedded systems, mechatronics, and firmware design. [web:168][web:84][web:156]

---

## Features

- 8-DOF articulated robotic hand.
- Serial bus servo control (Feetech SCS0009).
- Non-Arduino firmware on a real evaluation board (NuMaker-M258KG).
- Modular firmware architecture (servo driver, motion control, command interface).
- Optional glove-based teleoperation.
- Clear build phases and documentation for reproducibility.

---

## Learning Objectives

- Understand 3D-printed mechanical structures and tendon-driven hands.
- Learn serial bus servo protocols and power distribution.
- Implement layered firmware on an STM32-style MCU.
- Practice calibration, debugging, and documentation.
- Gain experience with a professional embedded workflow (debugger, BSP, toolchain).

---
## Getting Started

1. Read this `README.md` to understand the project.
2. Open [`BOM.md`](BOM.md) and order or confirm all parts.
3. Follow [`BUILD_PLAN.md`](BUILD_PLAN.md) to see the overall phases.
4. Go to the [`training/`](training/) folder and start with [`WEEK01.md`](training/WEEK01.md).
5. Use [`training/training_checklist.md`](training/training_checklist.md) to track your progress week by week.

If you get stuck, check [`docs/architecture.md`](docs/architecture.md) for firmware design and [`WIRING_GUIDE.md`](WIRING_GUIDE.md) for wiring details.

---


## System Architecture

- **Hand side:**
  - NuMaker-M258KG MCU board.
  - 8 × Feetech SCS0009 serial bus servos.
  - 5 V regulated power supply with bulk capacitance.
- **Glove side (optional):**
  - Flex sensors mounted on a glove.
  - Separate MCU (can be another NuMaker or similar) reading analog sensors.
  - Communication to the hand side via serial or wireless link.

---

## Repository Structure

```text
.
├── README.md
├── BOM.md
├── BUILD_PLAN.md
├── WIRING_GUIDE.md
├── docs/
│   └── architecture.md
├── firmware/
│   ├── scs0009_servo_driver.c
│   ├── motion_control.c
│   ├── command_interface.c
│   └── firmware_main.c
├── training/
│   ├── week01.md
│   ├── week02.md
│   ├── week03.md
│   ├── week04.md
│   ├── week05.md
│   ├── week06.md
│   ├── week07.md
│   ├── week08.md
│   ├── week09.md
│   ├── week10.md
│   ├── week11.md
│   └── week12.md
└── cad/
    └── (optional: links to Amazing Hand CAD files)
```

---

## Hardware Overview

### MCU Board

- **Nuvoton NuMaker-M258KG**
  - Cortex-M23-based evaluation board.
  - On-board Nu-Link2-Me debugger/programmer.
  - Designed for project evaluation and prototype development. [web:168]

### Robotic Hand

- **Amazing Hand**
  - Open-source 3D-printable robotic hand.
  - 8 DOF, 4 fingers, ~400 g weight.
  - Designed for 8 × Feetech SCS0009 servos. [web:84]

### Servos

- **Feetech SCS0009**
  - 6 V, 2.3 kg serial bus smart servo.
  - TTL-level half-duplex serial communication.
  - Feedback: position, speed, voltage, current, temperature, load. [web:156][web:176]

### Power

- **5 V regulated supply** (5 A recommended).
- **4700 µF / 16 V bulk capacitor** on the servo rail.

Full details and procurement links are in **[BOM.md](BOM.md)**.

---

## Getting Started

### 1. Review the BOM

Start with **[BOM.md](BOM.md)** to understand:

- All required components.
- Estimated costs.
- Procurement links.

### 2. Follow the Build Plan

Use **[BUILD_PLAN.md](BUILD_PLAN.md)** as your roadmap:

- **Phase 0:** Preparation and setup.
- **Phase 1:** Mechanical and electrical bring-up.
- **Phase 2:** Firmware, motion, and control.
- **Phase 3:** Integration, polish, and documentation.

Each phase has clear goals and deliverables.

### 3. Wire the System

Follow **[WIRING_GUIDE.md](WIRING_GUIDE.md)** for:

- Power system wiring.
- Servo daisy-chain configuration.
- NuMaker-M258KG UART connections for the serial bus.
- Step-by-step wiring procedure and checklist.

### 4. Build the Firmware

The firmware is organized into layers:

- `firmware/scs0009_servo_driver.c` – low-level servo communication.
- `firmware/motion_control.c` – hand poses and trajectories.
- `firmware/command_interface.c` – serial command parsing.
- `firmware/firmware_main.c` – main application.

See **[docs/architecture.md](docs/architecture.md)** for a full description of the design.

---

## Training Program

The **`training/`** folder contains a 12-week plan:

- **Weeks 1–4:** Project intro, printing, single-finger prototype, full hand assembly.
- **Weeks 5–8:** Servo wiring, glove build, sensor mapping, full integration.
- **Weeks 9–12:** Grasp testing, robustness, documentation, and stretch goals.

This aligns with the phased build plan and is suitable for a college-level training project.

---

## Safety Notes

- Always power off before changing connections.
- Use an external 5 V supply for servos; do not power servos from the MCU.
- Ensure common ground between MCU and servo supply.
- Test one servo at a time before enabling full motion.
- Keep fingers clear of pinch points during calibration and testing.

---

## Future Expansion

Possible next steps:

- Add wireless communication between glove and hand.
- Implement more advanced motion planning and grasp strategies.
- Port the firmware to another MCU family while keeping the same mechanical platform.
- Integrate with higher-level frameworks (e.g., ROS) on a host computer.

---

## Acknowledgments

- **Amazing Hand** project by Pollen Robotics (open-source hand design and documentation). [web:84]
- **Feetech SCS0009** servo documentation and protocol manual. [web:156][web:176]
- **Nuvoton NuMaker-M258KG** documentation and example projects. [web:168]

---

## License

(Add your chosen license here.)

---

## Contact

(Add your contact or project communication channel here.)
=======
# RoboticsHand
3D-printed robotic hand with NuMaker
>>>>>>> 2bda626164ed830d4f05822a7dfeda8da8062dd8
