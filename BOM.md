# Bill of Materials

## Overview

This BOM is for a beginner-friendly glove-controlled 3D-printed robotic hand. It uses:

- Nuvoton NuMaker-M258KG as the main MCU board.
- Amazing Hand as the mechanical platform.
- Feetech SCS0009 serial bus servos.
- A Bus Servo Driver Board for clean servo interfacing.

---

## 1. MCU board

### Nuvoton NuMaker-M258KG

- **Qty:** 1
- **Description:** NuMicro M258KG evaluation board with on-board Nu-Link2-Me debugger/programmer.
- **Links:**
  - Product page: https://www.nuvoton.com/board/numaker-m258kg/
  - Example distributor: https://www.techdesign.com/market/nuvoton/product-detail/ntc000606/numaker-m258kg

**Estimated unit cost:** $45–$80.

---

## 2. Mechanical platform

### Amazing Hand (Developer Kit)

- **Qty:** 1
- **Description:** Open-source 3D-printed robotic hand with 8 DOF and 4 fingers.
- **Links:**
  - Seeed Studio product page: https://www.seeedstudio.com/Amazing-Hand-Open-Source-3D-Printable-Robotic-Hand-Kit.html
  - Project repo and docs: https://github.com/pollen-robotics/AmazingHand

**Estimated unit cost:** $97–$140.

---

## 3. Bus Servo Driver Board

### Seeed Studio Bus Servo Driver Board (for XIAO / ST/SC series)

- **Qty:** 1
- **Description:** UART/USB bus servo driver board for ST/SC series servos, with integrated power distribution.
- **Key specs:**
  - Input voltage range: 5–12 V DC (match servo voltage).
  - Power supply interface: 2P 3.5 mm screw terminal or DC jack.
  - Servo interface: 3P terminals for ST/SC servos.
  - Communication: UART (for MCU) and USB (for PC).
- **Links:**
  - Seeed Wiki: https://wiki.seeedstudio.com/bus_servo_driver_board/
  - Example product page: https://www.robotshop.com/products/seeedstudio-bus-servo-driver-board-xiao

**Estimated unit cost:** $15–$35.

---

## 4. Servos

### Feetech SCS0009 Serial Bus Servo

- **Qty:** 8
- **Description:** 6 V, 2.3 kg serial bus smart servos for the Amazing Hand.
- **Links:**
  - Seeed product page: https://www.seeedstudio.com/Feetech-SCS0009-Servo-p-6535.html
  - Alternative vendor example: https://evelta.com/scs0009-6v-2-3kg-300deg-serial-bus-servo-motor/

**Estimated unit cost:** $8–$15.

---

## 5. Power supply

### 5 V regulated DC adapter

- **Qty:** 1
- **Description:** Regulated 5 V DC power adapter for servo power.
- **Specs:**
  - Output: 5 V.
  - Current: 2–5 A (2 A minimum, 5 A recommended for margin).
  - Connector: 5.5 × 2.1 mm barrel jack or screw terminals (match the bus driver board).
- **Links (examples):**
  - 5 V 2 A adapter: https://www.amazon.com/dp/B0833WXT7F
  - General guide: https://electronics.alibaba.com/buyingguides/5v-2a-power-adapter-guide-what-you-actually-need

**Estimated unit cost:** $10–$25.

### Bulk capacitor

- **Qty:** 1
- **Description:** 4700 µF / 16 V electrolytic capacitor for servo rail decoupling.

**Estimated unit cost:** $1–$3.

---

## 6. Wiring and connectors

- **Qty:** 1 lot
- **Description:** Assorted wires, headers, and connectors.
- **Suggested items:**
  - 22–24 AWG silicone wire for power.
  - 22–26 AWG stranded wire for signals.
  - 2.54 mm headers and Dupont connectors.
  - Small screw terminals for power.
  - Zip ties and heat-shrink tubing.

**Estimated cost:** $10–$20.

---

## 7. Optional glove controller parts

- **Qty:** 1 lot
- **Description:** Components for flex-sensor glove.
- **Suggested items:**
  - 5 × flex sensors.
  - 5 × resistors (10 kΩ–47 kΩ).
  - Glove.
  - Small perfboard.
  - Hookup wire.

**Estimated cost:** $15–$40.

---

## 8. Optional CAD and printing

- **Qty:** 1 lot
- **Description:** Filament and print resources if you print your own parts or spares.

**Estimated cost:** $10–$25.

---

## Power source summary

- The **5 V adapter** connects to the **Bus Servo Driver Board** power input (DC jack or screw terminal).
- The Bus Servo Driver Board distributes power to all SCS0009 servos.
- The NuMaker-M258KG is powered separately via USB or its own regulator.
- **Common ground** must be shared between NuMaker-M258KG and the Bus Servo Driver Board.

---

## Estimated total cost

- Core build (MCU + hand + driver + servos + power): roughly **$220–$320** depending on vendors.
- Optional glove and printing extras: add **$25–$65**.
