# Wiring Guide

## Overview

This guide covers wiring for:

- **NuMaker-M258KG** as the main MCU board.
- **Bus Servo Driver Board** (Seeed / ST/SC series).
- **Feetech SCS0009** serial bus servos inside the Amazing Hand.
- **5 V regulated power supply** with bulk decoupling.

The servos are controlled via a **bus servo driver board**, which handles power distribution and UART communication. The MCU talks to the driver board; the driver board talks to the servos.

---

## Safety first

- Power off before changing any connections.
- Do not power servos from the MCU’s 3.3 V or 5 V pins.
- Use an external regulated supply for servo power.
- Ensure **common ground** between MCU and driver board.
- Start with one or two servos before connecting all 8.

---

## Power system

### 5 V adapter

- Use a regulated **5 V adapter** (2–5 A).
- Connect the adapter to the **Bus Servo Driver Board** power input:
  - Either via the **DC barrel jack** (5.5 × 2.1 mm), or
  - Via the **2P 3.5 mm screw terminal**, depending on the board version.
- Confirm polarity (+ and −) before powering on.

### Bulk capacitor

- Place a **4700 µF / 16 V electrolytic capacitor** across the driver board power input:
  - Positive lead -> +5 V terminal.
  - Negative lead -> GND terminal.
- This helps smooth current spikes from servos.

### MCU power

- Power the **NuMaker-M258KG** via USB or its own supply.
- Do not tie the servo +5 V to any MCU power pins.
- Connect **MCU GND** to the driver board GND.

---

## Bus Servo Driver Board connections

### Power

- 5 V adapter -> driver board power input.
- Driver board -> distributes power to all servo VCC/GND pins.

### UART

- Choose a UART on the NuMaker-M258KG (e.g., UART0 or UART1).
- Connect:
  - **MCU UART TX** -> driver board UART RX.
  - **MCU UART RX** -> driver board UART TX.
  - **MCU GND** -> driver board GND.

Consult the NuMaker-M258KG user manual for the exact UART pin names and header locations.

---

## Servo connections

### SCS0009 servo wiring

Each SCS0009 servo has 3 lines:

- VCC (red)
- GND (black/brown)
- Signal (yellow/orange)

On the Bus Servo Driver Board:

- Connect each servo’s connector to a servo port (3P terminal).
- The board internally shares power and signal lines for all servos.

You do **not** need to wire servos directly to the MCU; the driver board handles the bus.

---

## Signal flow

```text
NuMaker-M258KG UART  <-->  Bus Servo Driver Board  <-->  SCS0009 servos (Amazing Hand)
           ^                     ^                         ^
           |                     |                         |
         MCU GND  -----------  Board GND  --------------  Servo GND
```

---

## Step-by-step wiring procedure

1. **Connect power to the driver board**
   - Wire the 5 V adapter to the driver board power input.
   - Add the bulk capacitor across the input.
   - Double-check polarity and connections.

2. **Connect MCU to driver board**
   - Wire UART TX/RX and GND between NuMaker-M258KG and the driver board.
   - Confirm UART settings (baud rate, levels) in firmware.

3. **Connect one servo**
   - Plug one SCS0009 into a servo port on the driver board.
   - Power on and run a simple test to move that servo.

4. **Add remaining servos**
   - Once the first servo works, connect the rest.
   - Test each servo by ID using your servo driver firmware.

---

## Wiring checklist

- [ ] 5 V adapter wired to driver board power input.
- [ ] Bulk capacitor installed across power input.
- [ ] MCU GND tied to driver board GND.
- [ ] UART TX/RX connected between MCU and driver board.
- [ ] At least one servo connected and tested.
- [ ] All servos connected only through the driver board (no direct MCU wiring).

---

## Common mistakes to avoid

- Powering servos directly from MCU pins.
- Forgetting to share ground between MCU and driver board.
- Mis-wiring UART TX/RX.
- Skipping the bulk capacitor, leading to noisy power.
- Connecting all servos before testing one.

---

## Next steps

Once wiring is complete and one servo responds correctly:

- Implement and refine the `scs0009_servo_driver` firmware.
- Test control of all servos via the Bus Servo Driver Board.
- Proceed to motion control and pose primitives.
