# Training Program Overview

This folder contains a structured **12-week training plan** for building the glove-controlled robotic hand. It is designed to be followed step by step, week by week, by a college student working mostly independently.

## How to use this plan

1. **Start with `BUILD_PLAN.md`**
   - Read the high-level phases:
     - Phase 0: Preparation and setup
     - Phase 1: Mechanical and electrical bring-up
     - Phase 2: Firmware, motion, and control
     - Phase 3: Integration, polish, and documentation
   - Understand the milestones and overall flow.

2. **Follow the weekly files**
   - Each `WEEK##.md` file is a self-contained guide for that week.
   - Work through them in order:
     - `WEEK01.md` → `WEEK12.md`
   - Each week includes:
     - Goals
     - Step-by-step tasks
     - Deliverables
     - Time estimate
     - Self-check questions

3. **Align weeks with phases**

   Roughly:

   - **Weeks 1–4** → Phase 0 and Phase 1  
     (setup, design study, mechanical assembly, first servo test)
   - **Weeks 5–7** → Phase 2  
     (full servo wiring, motion control, command interface)
   - **Weeks 8–10** → Phase 2 and Phase 3  
     (glove build, teleoperation, grasp testing)
   - **Weeks 11–12** → Phase 3  
     (robustness, documentation, final demo)

   Use `BUILD_PLAN.md` as the “big picture” map and these weekly files as your detailed checklist.

4. **Track your progress**
   - After each week:
     - Check off the deliverables.
     - Answer the self-check questions.
     - Update `docs/notes.md` (or your own log) with what you learned and any issues.
   - If you fall behind, treat the phases as flexible; you can stretch a week into two if needed.

## Files in this folder

- `README.md` – This overview.
- `WEEK01.md` – Project introduction and setup.
- `WEEK02.md` – Design study and first prints.
- `WEEK03.md` – Full hand mechanical assembly.
- `WEEK04.md` – Power system and first servo test.
- `WEEK05.md` – Full servo wiring and driver implementation.
- `WEEK06.md` – Motion control and basic poses.
- `WEEK07.md` – Command interface and serial control.
- `WEEK08.md` – Glove controller build.
- `WEEK09.md` – Sensor mapping and teleoperation.
- `WEEK10.md` – Grasp testing and tuning.
- `WEEK11.md` – Robustness and documentation.
- `WEEK12.md` – Final demo and next steps.

## Tips for success

- Don’t skip the self-check questions; they help you confirm understanding.
- Keep your notes honest and detailed; they will help you in Week 11 and 12.
- If something breaks or doesn’t work, document it; troubleshooting is part of the learning.
- Use `BUILD_PLAN.md` whenever you feel lost to re-orient yourself to the current phase and milestone.

When in doubt, ask:  
- “Which phase am I in?”  
- “What milestone am I working toward?”  
- “What deliverable do I need by the end of this week?”