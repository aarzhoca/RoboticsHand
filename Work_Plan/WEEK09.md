# Week 9 — Sensor Mapping and Teleoperation

## Goals

- Map glove sensor values to hand servo angles.
- Implement basic teleoperation.
- Test real-time glove control of the hand.

## Tasks

1. **Calibrate sensors**
   - For each finger:
     - Record relaxed (min) and bent (max) analog values.
     - Store these in your glove firmware.

2. **Map to angles**
   - Implement a mapping function:
     - Convert each sensor value to a 0–180 angle.
   - Optionally add deadband and smoothing.

3. **Transmit to hand**
   - Choose a communication method:
     - Wired serial between glove MCU and hand MCU, or
     - Simple wireless module if available.
   - Send mapped angles as a command (e.g., `POSE a1 ... a8`).

4. **Integrate with hand firmware**
   - On the hand side:
     - Receive glove commands.
     - Pass them to `cmd_execute()` or directly to `motion_set_pose()`.

5. **Test teleoperation**
   - Wear the glove and move your fingers.
   - Verify the hand follows your motion.
   - Tune mapping and smoothing as needed.

6. **Update your repo**
   - Add notes in `docs/notes.md`:
     - Calibration values.
     - Mapping approach.
     - Any latency or jitter issues.

## Deliverables

- Working teleoperation from glove to hand.
- Calibration and mapping logic documented.
- Updated repo with notes.

## Time Estimate

- 8–10 hours total.

---

## Self-check

- Does the hand follow your glove motion reasonably well?
- Is the motion smooth enough for basic tasks?
- Are you ready to test grasping objects next week?