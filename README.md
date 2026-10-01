# dimensioner v1 
MAAP 1 is a automated DIM system that costs 10 times less compared to the current options . 
it is aluminum blasted but u can completely use fibre 3d printing for this . i have removed the wieging scale from research that most users dont need it. 

Overview:
MAAP-1 Utilizes a custom ESP32-based PCB, 3 LiDAR sensors to  instantly calculate the length ,  height and width of any parcel .
Designed for logistics, warehouses . i have included electronics components make sure u add it in your cad library. sorry though not much room for customisation many pins are used , feel free to play around with the scematics if u wish
- it also features a camera system which snaps images along side the dim . how ever please make sure the camera module u use comes with a sd slot or just add a pin. 

Hardware Architecture
1. Custom PCB (KiCad)
The brains of the operation is a custom PCB designed to be attached anywhere in the frame it has a 2 hole enclosure that is also included .

Microcontroller: ESP32-WROOM
Power: 5V input, regulated to 3.3V via AMS1117 for logic.

2. Mechanical Structure
  - T-slot aluminum extrusion holding the overhead LiDAR .
  - Dual forward-facing structural arms housing inward-facing LiDARs 
  - control box housing the custom PCB, screen, buttons, and thermal printer.

Repository Structure

MAAP-1:
- Firmware             # PLEASE CALIBRATE AS PER NEEDS 
- Hardware            # KiCad PCB design files, Schematics, and Gerbers
- Mechanical           # 3D files for the enclosure and arms PLEASE ADD THE PCB ENCLOSURE AND SCREEN WHERE YOU NEED .
- README.md             # Project documentation



Here is the complete Bill of Materials (BOM) to build your own.
IF U WANT AMOUNTS IN DOLLARS PLEASE REFER TO BOM.CSV 



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


<img width="626" height="485" alt="Screenshot 2026-09-20 234741" src="https://github.com/user-attachments/assets/a639a58a-78a5-470c-8494-fa35c04d0c86" />




* **Total Estimated Build Cost:** **~₹23,500 (approx. $235 USD)**


