# Week 7 — Command Interface and Serial Control

## Goals

- Implement the command interface layer.
- Add a simple serial protocol for controlling the hand.
- Test manual control via a terminal.

## Tasks

1. **Define command protocol**
   - Decide on simple text commands, for example:
     - `OPEN`
     - `CLOSE`
     - `NEUTRAL`
     - `POSE a1 a2 ... a8`
   - Document this in `docs/notes.md`.

2. **Implement command interface**
   - In `firmware/command_interface.c`:
     - Implement `cmd_init()`.
     - Implement `cmd_process_char(c)` to build a command string.
     - Implement `cmd_execute(const char *cmd)` to parse and run commands.

3. **Integrate with motion control**
   - Map commands to motion functions:
     - `OPEN` -> `motion_open_hand()`
     - `CLOSE` -> `motion_close_hand()`
     - `NEUTRAL` -> `motion_neutral_hand()`
     - `POSE ...` -> `motion_set_pose()`

4. **Test with a terminal**
   - Connect the MCU UART to your PC (via USB-to-serial or debugger).
   - Use a terminal program to send commands.
   - Verify the hand responds correctly.

5. **Update your repo**
   - Commit `command_interface.c` and `firmware_main.c`.
   - Add a short usage guide in `docs/notes.md` or a new `docs/usage.md`.

## Deliverables

- Working command interface with basic commands.
- Manual control of the hand via serial terminal.
- Updated repo with code and usage notes.

## Time Estimate

- 6–8 hours total.

---

## Self-check

- Can you open, close, and set custom poses via serial commands?
- Is your command parsing robust enough for simple mistakes?
- Are you ready to start building the glove controller next week?