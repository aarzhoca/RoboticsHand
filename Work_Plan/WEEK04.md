# Week 4 — Power System and First Servo Test

## Goals

- Build the power distribution system.
- Wire and test one servo.
- Validate basic servo control with simple firmware.

## Tasks

1. **Prepare the power system**
   - Set up the 5 V regulated power supply.
   - Add the 4700 µF capacitor across the servo rail.
   - Verify polarity with a multimeter.

2. **Wire one servo**
   - Connect one SCS0009 servo:
     - VCC to +5 V rail.
     - GND to GND rail.
     - Signal to the UART half-duplex line (via a test setup).
   - Connect MCU GND to servo GND rail.

3. **Basic firmware test**
   - Implement a minimal program that:
     - Initializes the UART.
     - Sends a position command to one servo.
   - Test moving the servo between two angles.

4. **Debug and verify**
   - Confirm the servo moves smoothly.
   - Check for overheating or unusual noise.
   - Fix any wiring or firmware issues.

5. **Update your repo**
   - Add a short note in `docs/notes.md`:
     - Power setup details.
     - Any issues with the first servo test.

## Deliverables

- Working power system with one verified servo.
- Simple “hello servo” firmware.
- Updated repo notes.

## Time Estimate

- 6–8 hours total.

---

## Self-check

- Does the servo respond reliably to your commands?
- Is your power wiring clean and safe?
- Are you ready to wire all servos next week?