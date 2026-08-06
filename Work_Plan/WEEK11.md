# Week 11 — Robustness and Documentation

## Goals

- Improve the robustness of the system.
- Clean up wiring and mechanical assembly.
- Write clear documentation so others can reproduce your work.

## Tasks

1. **Improve wiring**
   - Re-route and organize wires:
     - Use zip ties and sleeves where possible.
     - Label important connections.
   - Secure the power supply and capacitor.

2. **Improve mechanical assembly**
   - Tighten loose joints.
   - Reinforce weak points with additional glue or printed parts.
   - Ensure tendons are properly tensioned.

3. **Add safety features**
   - In firmware:
     - Add startup calibration (move to neutral on boot).
     - Add timeout behavior if no commands are received.
     - Add basic error handling for servo faults.

4. **Write documentation**
   - In `docs/`:
     - `assembly.md`: step-by-step mechanical assembly notes.
     - `wiring_summary.md`: high-level wiring diagram and pin mapping.
     - `calibration.md`: how to calibrate sensors and servos.
     - `troubleshooting.md`: common issues and fixes.
   - Add photos or diagrams where helpful.

5. **Update your repo**
   - Commit all new documentation files.
   - Ensure `README.md` links to all key docs.

## Deliverables

- A cleaner, more robust hardware setup.
- Basic safety features in firmware.
- Clear documentation for assembly, wiring, calibration, and troubleshooting.

## Time Estimate

- 8–10 hours total.

---

## Self-check

- Could someone else reasonably follow your docs to rebuild this?
- Is the hardware tidy and safe to operate?
- Are common failure modes documented?