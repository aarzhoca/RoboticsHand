# 12-Week Training Checklist

Use this as a quick reference to track progress. For full details, see each `WEEK##.md` file and `BUILD_PLAN.md`.

---

## Week 1 — Project Introduction and Setup

- [ ] Read `README.md`, `BOM.md`, `BUILD_PLAN.md`
- [ ] Install toolchain, IDE, and Nu-Link2 drivers
- [ ] Create GitHub repo and initial structure
- [ ] Review hardware and order parts
- [ ] Write short setup notes in `docs/notes.md`

**Milestone:** Repo created, environment ready, parts planned.

---

## Week 2 — Design Study and First Prints

- [ ] Study Amazing Hand design and assembly guide
- [ ] Print or unpack one finger set
- [ ] Assemble one test finger
- [ ] Note print settings or kit observations
- [ ] Update `docs/notes.md`

**Milestone:** One working test finger.

---

## Week 3 — Full Hand Mechanical Assembly

- [ ] Print or organize all remaining parts
- [ ] Assemble full hand mechanically
- [ ] Mount all servos
- [ ] Route tendons/linkages and verify motion
- [ ] Add photos and notes to repo

**Milestone:** Fully assembled mechanical hand.

---

## Week 4 — Power System and First Servo Test

- [ ] Build 5 V power rail with bulk capacitor
- [ ] Wire and test one servo
- [ ] Implement minimal “hello servo” firmware
- [ ] Verify safe and reliable motion
- [ ] Update `docs/notes.md`

**Milestone:** Power system working, one servo under MCU control.

---

## Week 5 — Full Servo Wiring and Driver Implementation

- [ ] Wire all 8 servos to power and signal bus
- [ ] Implement `scs0009_servo_driver.c`
- [ ] Test each servo individually
- [ ] Commit driver code and notes

**Milestone:** All servos wired and individually controllable.

---

## Week 6 — Motion Control and Basic Poses

- [ ] Define `hand_pose_t` and basic poses
- [ ] Implement motion control layer
- [ ] Test open, close, neutral poses
- [ ] Optionally add simple interpolation
- [ ] Commit `motion_control.c` and notes

**Milestone:** Basic hand poses working.

---

## Week 7 — Command Interface and Serial Control

- [ ] Define simple text command protocol
- [ ] Implement `command_interface.c`
- [ ] Integrate with motion control
- [ ] Test manual control via serial terminal
- [ ] Add usage notes to docs

**Milestone:** Hand controllable via serial commands.

---

## Week 8 — Glove Controller Build

- [ ] Mount flex sensors on glove
- [ ] Wire sensors to analog inputs
- [ ] Read and log sensor values
- [ ] Record relaxed and bent ranges
- [ ] Document in `docs/notes.md`

**Milestone:** Working flex-sensor glove with stable readings.

---

## Week 9 — Sensor Mapping and Teleoperation

- [ ] Calibrate each sensor (min/max)
- [ ] Map sensor values to servo angles
- [ ] Transmit glove data to hand (wired or wireless)
- [ ] Integrate with hand motion control
- [ ] Test and tune teleoperation

**Milestone:** Glove-controlled hand motion.

---

## Week 10 — Grasp Testing and Tuning

- [ ] Prepare test objects (foam, cups, boxes, etc.)
- [ ] Define grasp patterns (cylindrical, pinch, flat)
- [ ] Run grasp tests and observe performance
- [ ] Tune servo limits and motion parameters
- [ ] Document results and improvements

**Milestone:** Reliable grasping of multiple objects.

---

## Week 11 — Robustness and Documentation

- [ ] Clean up wiring and mechanical assembly
- [ ] Add basic safety features in firmware
- [ ] Write `assembly.md`, `wiring_summary.md`, `calibration.md`, `troubleshooting.md`
- [ ] Add photos/diagrams as needed
- [ ] Ensure `README.md` links to all docs

**Milestone:** Robust system with clear documentation.

---

## Week 12 — Final Demo and Next Steps

- [ ] Prepare 2–3 demo behaviors
- [ ] Record demo video or prepare live demo
- [ ] Write retrospective and next-steps plan
- [ ] Finalize repo (clean code, complete README)
- [ ] Share project publicly

**Milestone:** Polished public repo and final demo.

---

## How to use this checklist

- At the start of each week, review that week’s tasks.
- At the end of each week, check off completed items and update your notes.
- If you fall behind, adjust the schedule but keep the milestone goals in mind.