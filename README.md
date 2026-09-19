# dimensioner-v1
MAAP-1: Automated Static Dimensioning and Weighing System 

Overview
MAAP-1 is a custom-engineered, all-in-one hardware solution designed for instant static dimensioning and weighing of packages. Utilizing a custom ESP32-based PCB, multidirectional LiDAR sensors, and an integrated weighing scale, MAAP-1 instantly calculates the Length, Width, Height, and Weight of an object and outputs the data to a built-in thermal printer.
Designed for logistics, warehouses, and post offices, this prototype features a robust T-slot aluminum frame with 3D-printed enclosures and internal cable routing for a clean, industrial finish.

Key Features
Instant Volumetric Measurement: Uses 3x LiDAR sensors on fixed structural arms to measure (L x W x H) down to the millimeter.
Integrated Weighing: Heavy-duty metal scale base seamlessly communicates with the controller.
Custom PCB Architecture: Purpose-built ESP32-WROOM motherboard designed in KiCad, featuring onboard power regulation (AMS1117-3.3V), dedicated peripheral headers, and optimized ground planes.
Live UI / Diagnostics: I2C LCD/OLED screen displays real-time spatial data and system status.
Thermal Receipt Printing: Instantly prints shipping labels or dimension receipts via serial communication.
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
- Firmware             # ESP32 C++ source code (PlatformIO / Arduino IDE)
- Hardware            # KiCad PCB design files, Schematics, and Gerbers
- Mechanical           # 3D Print files (.STL) and CAD models (.STEP) for the enclosure and arms
- Docs               # Datasheets, assembly guides, and high-res images
- README.md             # Project documentation

Future Improvements

Database integration via ESP32 Wi-Fi for cloud-based package logging.
Barcode scanner integration for automatic tracking number association.

Over-the-Air (OTA) firmware updates.
