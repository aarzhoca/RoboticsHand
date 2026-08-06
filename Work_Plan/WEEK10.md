# Week 10 — Grasp Testing and Tuning

## Goals

- Test the hand’s ability to grasp objects.
- Tune servo limits and motion for better grip.
- Identify mechanical or firmware improvements.

## Tasks

1. **Prepare test objects**
   - Gather lightweight objects:
     - Foam blocks.
     - Plastic cups.
     - Small cardboard boxes.
     - Soft balls or stress toys.
   - Ensure objects are safe and won’t damage the hand.

2. **Define grasp patterns**
   - Create a few standard poses:
     - Cylindrical grasp (for cups).
     - Pinch grasp (for small items).
     - Flat-hand grasp (for boxes).
   - Implement these as named poses in `motion_control.c`.

3. **Run grasp tests**
   - Use teleoperation or serial commands to:
     - Approach each object.
     - Close the hand around it.
     - Lift and hold briefly.
     - Release safely.
   - Observe which fingers limit first or slip.

4. **Tune motion and limits**
   - Adjust:
     - Servo angles for each grasp.
     - Speed and interpolation time.
     - Soft limits to prevent over-tightening.
   - Re-test after each change.

5. **Update your repo**
   - Add notes in `docs/notes.md`:
     - Which grasps work well.
     - Which need improvement.
     - Any mechanical adjustments you made.

## Deliverables

- A set of tested grasp patterns.
- Tuned motion parameters.
- Updated repo with test notes.

## Time Estimate

- 6–8 hours total.

---

## Self-check

- Can the hand reliably grasp at least 2–3 different objects?
- Are servo limits safe and consistent?
- Do you have a clear list of improvements for the next week?