# Week 6 — Motion Control and Basic Poses

## Goals

- Implement the motion control layer.
- Define basic hand poses (open, close, neutral).
- Test smooth motion between poses.

## Tasks

1. **Define pose data**
   - In `firmware/motion_control.c`:
     - Define a `hand_pose_t` structure with 8 angles.
     - Define constants for open, close, and neutral poses.

2. **Implement motion functions**
   - Implement:
     - `motion_init()`
     - `motion_open_hand()`
     - `motion_close_hand()`
     - `motion_neutral_hand()`
     - `motion_set_pose(const hand_pose_t *pose)`

3. **Test basic poses**
   - Write a test program that:
     - Moves the hand to neutral.
     - Then to open.
     - Then to close.
     - Repeat a few cycles.
   - Observe motion quality and adjust angles if needed.

4. **Optional: simple interpolation**
   - If time permits, add a simple linear interpolation between two poses over a fixed duration.

5. **Update your repo**
   - Commit `motion_control.c`.
   - Update `docs/notes.md` with:
     - Pose definitions.
     - Any tuning you did.

## Deliverables

- Working motion control layer with basic poses.
- Test program demonstrating open/close/neutral.
- Updated repo with code and notes.

## Time Estimate

- 6–8 hours total.

---

## Self-check

- Do the open, close, and neutral poses look correct?
- Is the motion smooth and within safe limits?
- Are you ready to add a command interface next week?