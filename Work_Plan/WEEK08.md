# Week 8 — Glove Controller Build

## Goals

- Build the flex-sensor glove.
- Read sensor values on a separate MCU.
- Validate stable analog readings.

## Tasks

1. **Prepare the glove**
   - Choose a snug-fitting glove.
   - Mark positions for flex sensors on each finger.

2. **Mount flex sensors**
   - Attach 5 flex sensors (thumb, index, middle, ring, pinky).
   - Use thread, tape, or adhesive mounts.
   - Keep wiring neat and flexible.

3. **Wire the sensors**
   - On a separate MCU (can be another NuMaker or similar):
     - Wire each sensor as a voltage divider to an analog input.
     - Use appropriate resistors (e.g., 10 kΩ–47 kΩ).
   - Connect to the MCU’s ADC pins.

4. **Read sensor values**
   - Write a simple program to:
     - Read all 5 analog channels.
     - Print values over serial.
   - Record relaxed and fully bent values for each sensor.

5. **Update your repo**
   - Add notes in `docs/notes.md`:
     - Sensor positions.
     - Typical min/max values.
     - Any wiring challenges.

## Deliverables

- A working flex-sensor glove with stable readings.
- A simple reader firmware on the glove-side MCU.
- Updated repo with notes.

## Time Estimate

- 6–8 hours total.

---

## Self-check

- Are the sensor readings stable and repeatable?
- Can you clearly distinguish relaxed vs bent states?
- Are you ready to map glove input to hand motion next week?