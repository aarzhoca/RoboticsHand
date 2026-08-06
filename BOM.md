# Bill of Materials

## Project overview

- **MCU board:** Nuvoton NuMaker-M258KG
- **Mechanical platform:** Amazing Hand (open-source 3D-printable robotic hand)
- **Actuators:** Feetech SCS0009 serial bus servos (8 total)
- **Power:** External regulated 5 V supply with bulk capacitance
- **Firmware:** Non-Arduino MCU firmware on NuMaker-M258KG

This BOM targets a **complete, functional robotic hand** while staying in the spirit of a **sub-$200–$300** project when sourced carefully. [web:168][web:84][web:156]

---

## 1. MCU board

### Nuvoton NuMaker-M258KG

- **Qty:** 1
- **Description:** NuMicro M258KG evaluation board with on-board Nu-Link2-Me debugger/programmer.
- **Key features:**
  - Cortex-M23-based MCU.
  - On-board debugger (Nu-Link2-Me).
  - Designed for project evaluation and prototype development. [web:168][web:169]
- **Links:**
  - Product page: [Nuvoton NuMaker-M258KG](https://www.nuvoton.com/board/numaker-m258kg/) [web:168]
  - User manual (PDF): [UM_NuMaker-M258KG_EN_Rev1.00.pdf](https://www.nuvoton.com/export/resource-files/en-us--UM_NuMaker-M258KG_EN_Rev1.00.pdf) [web:169]
  - Example distributor: [Techdesign NuMaker-M258KG](https://www.techdesign.com/market/nuvoton/product-detail/ntc000606/numaker-m258kg) [web:174]

**Estimated unit cost:** $45–$83.77 depending on distributor. [web:174][web:166]

---

## 2. Mechanical platform

### Amazing Hand (left hand) – Developer Kit

- **Qty:** 1
- **Description:** Open-source 3D-printable robotic hand with 8 DOF, 4 fingers, 400 g weight.
- **Key features:**
  - 8 degrees of freedom.
  - Designed for 8 × Feetech SCS0009 servos.
  - Open-source BOM, CAD, and assembly guide. [web:84][web:170]
- **Links:**
  - Seeed Studio product page: [Amazing Hand Kit](https://www.seeedstudio.com/Amazing-Hand-Open-Source-3D-Printable-Robotic-Hand-Kit.html) [web:84]
  - GitHub repository (project files): [pollen-robotics/AmazingHand](https://github.com/pollen-robotics/AmazingHand) [web:170]
  - Hugging Face blog (project overview): [Open-sourcing “The Amazing Hand”](https://huggingface.co/blog/pollen-robotics/amazing-hand) [web:170]
  - Alternative vendor: [WowRobo Amazing Hand Kit](https://shop.wowrobo.com/products/amazing-hand-the-open-source-robotic-hand-kit) [web:172]

**Estimated unit cost:** $97–$137.07 depending on vendor and quantity. [web:84][web:157][web:172]

---

## 3. Servos

### Feetech SCS0009 Serial Bus Servo

- **Qty:** 8
- **Description:** 6 V, 2.3 kg serial bus ultra-compact smart servo with metal gearbox and 10-bit magnetic encoder.
- **Key specs:**
  - Operating voltage: 4.0 V–7.4 V
  - Stall torque: 2.3 kg.cm @ 6 V
  - Rated torque: 0.7 kg.cm @ 6 V
  - Stall current: 1.0 A @ 6 V
  - Running degree: 300 degrees (0–1024)
  - Protocol: half-duplex asynchronous serial communication
  - Feedback: position, speed, voltage, current, temperature, load [web:156][web:167][web:173]
- **Links:**
  - Seeed Studio product page: [Feetech SCS0009 Servo](https://www.seeedstudio.com/Feetech-SCS0009-Servo-p-6535.html) [web:156]
  - Datasheet / spec page: [Evelta SCS0009](https://evelta.com/scs0009-6v-2-3kg-300deg-serial-bus-servo-motor/) [web:167]
  - Alternative vendor example: [AIFitLab Feetech SCS0009](https://aifitlab.com/products/feetech-scs0009-servo-motor) [web:173]

**Estimated unit cost:** $8–$15 depending on vendor and quantity. [web:156][web:173]

---

## 4. Power supply

### External regulated 5 V DC supply

- **Qty:** 1
- **Description:** Regulated DC power supply, 5 V output, at least 5 A recommended for margin.
- **Rationale:**
  - The hand uses 8 servos that can draw up to ~1 A each at stall.
  - A 5 V / 2 A minimum is mentioned in the hand documentation, but that is tight for all servos moving together.
  - A 5 V / 5 A supply provides more headroom and reduces voltage sag. [web:145][web:149][web:152]
- **Example spec:**
  - Output: 5 V, 5 A or higher
  - Connector: DC barrel jack or screw terminals
  - Over-current and over-voltage protection preferred

**Estimated unit cost:** $15–$25 depending on quality and brand.

---

## 5. Bulk decoupling capacitor

### 4700 µF / 16 V electrolytic capacitor

- **Qty:** 1
- **Description:** Electrolytic capacitor for servo rail bulk decoupling.
- **Rationale:**
  - Servos generate large current spikes during motion.
  - A bulk capacitor near the servo power input helps stabilize the rail. [web:149][web:152]
- **Example spec:**
  - Capacitance: 4700 µF
  - Voltage rating: 16 V or higher
  - Radial leaded

**Estimated unit cost:** $1–$3.

---

## 6. Wiring, connectors, and small hardware

### Assorted wiring and connectors

- **Qty:** 1 lot
- **Description:** Wires, connectors, terminal blocks, headers, and small hardware.
- **Suggested items:**
  - 22–24 AWG silicone wire for servo power.
  - 22–26 AWG stranded wire for signal lines.
  - 2.54 mm pitch headers and Dupont connectors.
  - Small terminal blocks or screw terminals for power distribution.
  - Heat-shrink tubing, zip ties, and small screws/nuts/washers.

**Estimated cost:** $10–$20.

---

## 7. Optional: Flex-sensor glove for teleoperation

### Flex sensors and glove

- **Qty:** 1 lot
- **Description:** Components for a glove-based input device.
- **Suggested items:**
  - 5 × flex sensors (e.g., 4.5 inch).
  - 5 × resistors (e.g., 10 kΩ–47 kΩ) for voltage dividers.
  - Stretch-fit glove.
  - Small perfboard or proto board.
  - Hookup wire, thread, and adhesive or sewing mounts.

**Estimated cost:** $15–$40 depending on sensor quality and sourcing.

---

## 8. Optional: 3D-print filament / spares

### PLA or PETG filament

- **Qty:** 1 lot
- **Description:** Filament for spares, revisions, or custom parts.
- **Suggested items:**
  - 1 × 1 kg spool of PLA or PETG.
  - Optional: flexible filament for finger pads or soft tips.

**Estimated cost:** $10–$25.

---

## Estimated total cost

### Core build only (without optional parts)

- **Low end:** approximately **$222**
- **High end:** approximately **$409**

This range reflects variation in:
- NuMaker-M258KG price ($45–$83.77). [web:174][web:166]
- Amazing Hand kit price ($97–$137.07). [web:84][web:157]
- SCS0009 servo price ($8–$15 each, 8 total). [web:156][web:173]

### With optional glove and filament

- Add roughly **$25–$65** more.

---

## Procurement checklist

- [ ] 1 × NuMaker-M258KG board
- [ ] 1 × Amazing Hand developer kit
- [ ] 8 × Feetech SCS0009 servos
- [ ] 1 × 5 V / 5 A (or higher) regulated power supply
- [ ] 1 × 4700 µF / 16 V capacitor
- [ ] Wiring, connectors, and small hardware
- [ ] (Optional) Flex sensors and glove materials
- [ ] (Optional) Filament for spares and revisions

---

## Notes for future expansion

- You can later:
  - Add wireless communication between glove and hand.
  - Port the firmware to another MCU family while keeping the same mechanical platform.
  - Add higher-level control (e.g., ROS) on a host computer.
- The open-source nature of the Amazing Hand means you can modify CAD, print custom parts, or adapt the design to other actuators. [web:170][web:174]