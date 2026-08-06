# Firmware Architecture

## Overview

This document describes the firmware architecture for the robotic hand on **NuMaker-M258KG**, controlling **Feetech SCS0009** serial bus servos. The design is layered to keep the code modular, testable, and easy to extend.

---

## Layers

### 1. HAL / BSP layer

- **Responsibility:** Low-level hardware access.
- **Components:**
  - Clock configuration.
  - GPIO setup.
  - UART initialization and character I/O.
  - Timer setup (if needed for timing or PWM).
- **Notes:**
  - Use Nuvoton BSP and example projects as a base.
  - Keep this layer separate from higher-level logic.

### 2. Servo driver layer

- **File:** `scs0009_servo_driver.c`
- **Responsibility:** Direct communication with SCS0009 servos.
- **API:**
  - `scs_init()` – initialize UART and internal state.
  - `scs_set_position(id, angle)` – command a servo to a target angle.
  - `scs_get_status(id, &status)` – read servo feedback (position, current, temperature, etc.).
  - `scs_set_limits(id, min_angle, max_angle)` – configure soft limits.
- **Notes:**
  - Implements the Feetech serial bus protocol. [web:176][web:179]
  - Handles packet framing, checksum, and retries.
  - Abstracts servo IDs and angle units.

### 3. Motion control layer

- **File:** `motion_control.c`
- **Responsibility:** High-level hand motion and pose management.
- **API:**
  - `motion_init()` – initialize motion state.
  - `motion_set_pose(&pose)` – move to a specified pose.
  - `motion_open_hand()` – predefined open-hand pose.
  - `motion_close_hand()` – predefined close-hand pose.
  - `motion_neutral_hand()` – rest pose.
  - `motion_interpolate(&from, &to, duration_ms)` – smooth trajectory between poses.
- **Notes:**
  - Works in terms of DOF angles, not servo IDs directly.
  - Can add trajectory shaping, speed limits, and acceleration profiles.

### 4. Command interface layer

- **File:** `command_interface.c`
- **Responsibility:** External command parsing and execution.
- **API:**
  - `cmd_init()` – initialize command state.
  - `cmd_process_char(c)` – feed incoming characters (e.g., from UART).
  - `cmd_execute(cmd)` – execute a parsed command string.
- **Example commands:**
  - `OPEN` – trigger open-hand pose.
  - `CLOSE` – trigger close-hand pose.
  - `NEUTRAL` – trigger neutral pose.
  - `POSE a1 a2 ... a8` – move to a custom pose.
- **Notes:**
  - Can later be extended with calibration, limit, and status commands.

### 5. Application layer

- **File:** `firmware_main.c`
- **Responsibility:** System initialization and main loop.
- **Flow:**
  1. Initialize all layers.
  2. Move to neutral pose.
  3. Run main loop:
     - Read characters from UART.
     - Process commands.
- **Notes:**
  - Keep application logic minimal; delegate to lower layers.

---

## Data flow

```text
[UART / debug interface]
        |
        v
[command_interface]
        |
        v
[motion_control]
        |
        v
[scs0009_servo_driver]
        |
        v
[HAL / BSP] -> [NuMaker-M258KG hardware]
```

---

## Safety and robustness

- **Startup behavior:**
  - Initialize all layers.
  - Move to neutral pose on startup.
- **Limits:**
  - Soft limits per DOF in the motion layer.
  - Optional hard limits in the servo driver.
- **Fault handling:**
  - Detect servo errors (e.g., over-current, over-temperature).
  - Implement timeout behavior if commands stop arriving.

---

## Extension points

Future enhancements can include:

- **Glove teleoperation:**
  - Add an input layer that reads glove sensors.
  - Map glove input to motion commands.
- **Logging and diagnostics:**
  - Add a debug console.
  - Log servo status and errors.
- **Higher-level control:**
  - Integrate with ROS or a PC-based controller.
  - Add trajectory planning and object manipulation logic.

---

## Files

- `scs0009_servo_driver.c` – servo driver.
- `motion_control.c` – motion and pose management.
- `command_interface.c` – command parsing and execution.
- `firmware_main.c` – main application.
- `architecture.md` – this document.