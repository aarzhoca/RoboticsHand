# Wiring Guide

## Overview

This guide covers the wiring for:

- **NuMaker-M258KG** as the main MCU board.
- **Feetech SCS0009** serial bus servos (8 total).
- **Amazing Hand** mechanical platform.
- **5 V regulated power supply** with bulk decoupling.

The servos use a **half-duplex serial bus** (TTL-level), not PWM. All servos share the same signal line in a daisy-chain configuration. [web:156][web:176][web:179]

---

## Safety first

- **Always power off** before connecting or disconnecting any wires.
- **Never power servos from the MCU 3.3 V or 5 V pins.**
- Use an **external 5 V supply** for the servo rail.
- Ensure **common ground** between the MCU and servo supply.
- Start with **one servo** and verify before connecting all 8. [web:180][web:181]

---

## Power system

### Servo power rail

- **Supply:** Regulated 5 V, 5 A recommended.
- **Connections:**
  - **+5 V** from supply -> servo VCC rail.
  - **GND** from supply -> servo GND rail.
- **Bulk capacitor:**
  - Connect a **4700 µF / 16 V electrolytic capacitor** across the servo rail:
    - Positive lead -> +5 V rail.
    - Negative lead -> GND rail.
  - Place the capacitor as close as practical to the servo power input.

### MCU power

- The **NuMaker-M258KG** is typically powered via USB or an on-board regulator.
- Do **not** connect the servo +5 V to any MCU power pin.
- Only connect **GND** between the MCU and servo supply.

---

## Servo wiring

### Feetech SCS0009 connector

Each SCS0009 servo has a 3-wire connector:

- **VCC** (red)
- **GND** (black or brown)
- **Signal** (yellow or orange)

The servos are daisy-chained on the signal line:

- **VCC** and **GND** are shared for all servos.
- **Signal** is a single wire that connects to all servos in parallel. [web:175][web:178]

### Daisy-chain wiring

For each servo:

1. Connect **VCC** to the +5 V servo rail.
2. Connect **GND** to the GND servo rail.
3. Connect **Signal** to the shared signal bus.

The signal bus is a single wire that runs from the MCU UART TX/RX pin to each servo signal pin.

---

## NuMaker-M258KG connections

### UART for servo bus

The SCS0009 uses a half-duplex serial bus. You will use one UART on the NuMaker-M258KG:

- **UART TX** and **RX** are tied together to form a single half-duplex line.
- This line connects to the **signal bus** for all servos.

Example (adjust to your chosen UART pins):

- **UARTn_TX** -> servo signal bus
- **UARTn_RX** -> servo signal bus
- **MCU GND** -> servo GND rail

Check the **NuMaker-M258KG user manual** for available UART pins and pin mapping. [web:168][web:170]

### Recommended pin selection

- Choose a UART that:
  - Is available on headers.
  - Has 3.3 V or 5 V tolerant pins as needed.
- Ensure the signal level is compatible with the SCS0009 TTL level (typically 3.3 V–5 V logic).

If necessary, use a **level-shifter** between the MCU and servo bus.

---

## Step-by-step wiring procedure

### 1. Prepare the power rails

- Connect the **5 V supply** to the servo power rails.
- Add the **bulk capacitor** across the rails.
- Verify polarity with a multimeter before powering on.

### 2. Connect the first servo

- Connect **VCC** and **GND** to the servo rails.
- Connect the **signal wire** to the UART half-duplex line.
- Double-check all connections.

### 3. Connect MCU ground

- Connect **MCU GND** to the servo GND rail.
- Do **not** connect MCU power pins to the servo rail.

### 4. Power-on test

- Power on the MCU (via USB or debugger).
- Power on the servo supply.
- Run a simple test program to:
  - Initialize the UART.
  - Send a position command to the servo.
  - Verify motion.

### 5. Add remaining servos

- Repeat the wiring for each additional servo.
- Keep the signal bus as a single shared line.
- Verify each servo individually before full integration.

---

## Wiring checklist

- [ ] Servo power rail wired to 5 V supply.
- [ ] Bulk capacitor installed across servo rails.
- [ ] All servo VCC and GND connected correctly.
- [ ] Signal bus wired as a single shared line.
- [ ] UART TX and RX tied together for half-duplex.
- [ ] MCU GND connected to servo GND.
- [ ] No MCU power pins connected to servo rail.
- [ ] Polarity verified with multimeter before power-on.
- [ ] First servo tested before adding others.

---

## Common mistakes to avoid

- **Powering servos from the MCU 5 V or 3.3 V pins.**
- **Forgetting common ground** between MCU and servo supply.
- **Connecting TX and RX separately** instead of tying them for half-duplex.
- **Skipping the bulk capacitor**, leading to voltage sag and instability.
- **Connecting all servos at once** without testing individually. [web:180][web:181]

---

## Next steps

Once wiring is complete:

- Implement the **servo driver** firmware.
- Test each servo with simple position commands.
- Proceed to the **motion control layer** and pose primitives.

If you want, I can next generate a **`firmware/servo_driver/`** skeleton with initialization and basic position-command functions for the SCS0009 on NuMaker-M258KG.