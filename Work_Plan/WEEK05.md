# Week 5 — Full Servo Wiring and Driver Implementation

## Goals

- Wire all 8 servos to the power rail and signal bus.
- Implement the `scs0009_servo_driver` layer.
- Verify individual control of each servo.

## Tasks

1. **Wire all servos**
   - Follow `WIRING_GUIDE.md`:
     - Connect all VCC and GND to the servo rails.
     - Connect all signal wires to the shared UART half-duplex line.
   - Double-check all connections before powering on.

2. **Implement servo driver**
   - In `firmware/scs0009_servo_driver.c`:
     - Implement `scs_init()`.
     - Implement `scs_set_position(id, angle)`.
     - Optionally implement `scs_get_status()` later.
   - Ensure correct packet framing and checksum per the SCS0009 protocol.

3. **Test each servo**
   - Write a simple test program that:
     - Loops through servo IDs 1–8.
     - Moves each servo to a few test angles.
   - Verify each servo moves as expected.

4. **Update your repo**
   - Commit your `scs0009_servo_driver.c` implementation.
   - Add notes in `docs/notes.md` about:
     - Wiring challenges.
     - Any servos that behaved unexpectedly.

## Deliverables

- All 8 servos wired and individually controllable.
- Basic servo driver implementation.
- Updated repo with code and notes.

## Time Estimate

- 8–10 hours total.

---

## Self-check

- Can you command each servo by ID?
- Is your wiring organized and labeled?
- Do you feel ready to implement motion primitives next week?