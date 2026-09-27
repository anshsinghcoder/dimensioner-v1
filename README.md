# dimensioner-v1
MAAP-1: Automated Static Dimensioning and Weighing System 

Overview
MAAP-1 is a custom-engineered, all-in-one hardware solution designed for instant static dimensioning and weighing of packages. Utilizing a custom ESP32-based PCB, multidirectional LiDAR sensors, and an integrated weighing scale, MAAP-1 instantly calculates the Length, Width, Height, and Weight of an object .
Designed for logistics, warehouses, and post offices, this prototype features a robust T-slot aluminum frame with 3D-printed enclosures and internal cable routing for a clean, industrial finish.

Key Features
Instant Volumetric Measurement: Uses 3x LiDAR sensors on fixed structural arms to measure (L x W x H) down to the millimeter.
Integrated Weighing: Heavy-duty metal scale base seamlessly communicates with the controller.
Custom PCB Architecture: Purpose-built ESP32-WROOM motherboard designed in KiCad, featuring onboard power regulation (AMS1117-3.3V), dedicated peripheral headers, and optimized ground planes.
Live UI / Diagnostics: I2C LCD/OLED screen displays real-time spatial data and system status.

Industrial Enclosure: Clean, professional 3D-printed housing with tactile dual-button operation (SW1, SW2) and status LEDs.

Hardware Architecture

1. Custom PCB (KiCad)
The brains of the operation is a custom 2-layer PCB designed to dock the ESP32 module and route all peripherals cleanly.

Microcontroller: ESP32-WROOM (Wi-Fi & Bluetooth combo chip)
Power: 5V input, regulated to 3.3V via AMS1117 for logic.
Connectors: JST/Pin-headers (J3-J6) dedicated to LiDAR arrays, I2C display, and Thermal Printer.
User Input: 2x Tactile Push Buttons with hardware debouncing.

2. Mechanical Structure

Base: Metal weighing scale platform.
Vertical Mast: T-slot aluminum extrusion holding the overhead LiDAR (Height sensor).
Side Arms: Dual forward-facing structural arms housing inward-facing LiDARs (Length & Width sensors).
Main Console: Side-mounted control box housing the custom PCB, screen, buttons, and thermal printer.

Repository Structure

MAAP-1:
- Firmware             # ESP32 C++ source code (PlatformIO / Arduino IDE) PLEASE CALIBRATE AS PER NEEDS 
- Hardware            # KiCad PCB design files, Schematics, and Gerbers
- Mechanical           # 3D Print files (.STL) and CAD models (.STEP) for the enclosure and arms PLEASE ADD THE PCB ENCLOSURE AND SCREEN WHERE YOU NEED .
- Docs               # Datasheets, assembly guides, and high-res images.
- README.md             # Project documentation

Future Improvements

Database integration via ESP32 Wi-Fi for cloud-based package logging.
Barcode scanner integration for automatic tracking number association.
Over-the-Air (OTA) firmware updates.


Here is the complete Bill of Materials (BOM) to build your own.



| Component | Qty | Est. Price | Link / Source |
| --- | --- | --- | --- |
| **ESP32 WROOM-32 Dev Board** | 1 | ₹1850 | [Robu.in](https://robu.in/product/nodemcu-esp-32s-esp-32e-wifi-serial-wifi-bluetooth/?utm_source=gemini) |
| **ESP32-CAM Module** | 1 | ₹2499 | [Robu.in](https://robu.in/product/esp32-cam-wifi-module-bluetooth-with-ov2640-camera-module-2mp/?utm_source=gemini) |
| **VL53L0X ToF LiDAR Sensor** | 3 | ₹4500 *(₹1499 each)* | [Robu.in](https://www.google.com/search?q=https://robu.in/product/vl53l0x-time-of-flight-tof-laser-ranging-sensor-v2/&utm_source=gemini) |
| **1.3" I2C OLED Display (White)** | 1 | ₹299 | [Robu.in](https://robu.in/product/1-3-inch-i2c-oled-display-module-4-pin-white/?utm_source=gemini) |
| **Mechanical Switch / Arcade Button** | 1 | ₹150 | Local Electronics Market |
| **5V 3A Power Adapter** | 1 | ₹250 | Local Electronics Market |
| **LED Strip / Ring Light (6000K)** | 1 | ₹150 | Local Electronics Market |
| **Aluminum 2020 V-Slot Extrusions** | 2m | ₹1000 | Local Hardware Supplier |
| **Clear Polycarbonate/Acrylic Sheets** | 1 | ₹900 | Local Laser-Cutting Shop |
| **Custom PCB (Matte Black + ENIG)** | 5 | ₹1850 | [JLCPCB](https://jlcpcb.com?utm_source=gemini) |
| **Hardware Kit (T-Nuts, M4 Bolts, Brackets)** | 1 | ₹350 | Local Hardware Supplier |


<img width="1024" height="872" alt="image" src="https://github.com/user-attachments/assets/cd19077e-bae5-4a1f-a041-f82f6c88e48a" />



If you are prototyping this for a grant, portfolio, or a startup venture, the economics are incredibly lean.

* **Total Estimated Build Cost:** **~₹23,500 (approx. $235 USD)**

Happy building! Feel free to open an issue or pull request if you find better component alternatives.

