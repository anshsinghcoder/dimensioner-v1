/*  LIBRARIES YOU NEED (Arduino Library Manager):
- "VL53L0X" by Pololu
- "Adafruit SSD1306" + "Adafruit GFX Library"
- ESP32 camera driver (esp_camera.h) 
*/
/* please map the pins and perform LWH calibaration according to your needs , standard is set on 60*60*60 */

VL53L0X sensorL , sensorW , sensorH ; 
Adafruit_SSD1306 display ( SCREEN_WIDTH, SCREEN_HEIGHT, Wire ,-1 );

bool cameraReady = false ; 

void setupCamera() {
    camera_config_t config; 
    config.ledc_channel = LEDC_CHANNEL_0;
    config.ledc_timer = LEDC_TIMER_0; 
       config.pin_d0 = 5;  
       config.pin_d1 = 18;
       config.pin_d2 = 19;
       config.pin_d3 = 21;
       config.pin_d4 =36;
       config.pin_d5 = 39; 
       config.pin_d6 =34;
       config.pin_d7 =35; 
       config.pin_xclx =0;
       config.pin_pclx = 22; 
       config.pin_vsync = 25;
       config.pin_href = 23;
       config.pin_sscb_sda= 26;
       config.pin_sscb_scl = 27;
       config.pin_pwdn = 32;
       config.pin_reset = -1;
       config.pin_freq_hz = 20000000;
       config.pin_format = PIXFORMAT_JPEG;
       config.frame_size = FRAMESIZE_SVGA; 
       config.jpeg_quality = 12;
       config.fb_count = 1 ; 

       if (esp_camera_init(&config) == ESP_OK) {
    cameraReady = true;
  } else {
    Serial.println("Camera init failed continuing without photo capture.");
    cameraReady = false;
  }
}
void resetAllSensors(){
     pinMode(XSHUT_L_PIN, OUTPUT);   
     pinMode(XSHUT_W_PIN, OUTPUT); 
     pinMode(XSHUT_H_PIN, OUTPUT);
    digitalWrite(XSHUT_L_PIN, LOW);
    digitalWrite(XSHUT_W_PIN, LOW);
    digitalWrite(XSHUT_H_PIN, LOW);
    delay(10);
}

bool bringUpSensor(VL53L0X &sensor, int xshutPin, uint8_t newAddr) {
  digitalWrite(xshutPin, HIGH);
  delay(10);
  sensor.setTimeout(500);
  if (!sensor.init()) {
    return false;
  }
  sensor.setAddress(newAddr);
  return true;
}


void setup{
    Serial.begin(1115200);
    delay(200);

    pinMode(BUTTON_PIN, INPUT_PULLUP);
  Wire.begin(I2C_SDA, I2C_SCL);

  resetAllSensors();
bool okL = bringUpSensor(sensorL , XSHUT_L_PIN , ADDR_L );
bool okW = bringUpSensor(sensorW , XSHUT_W_PIN , ADDR_W);
bool okH = bringUpSensor(sensorH , XSHUT_H_PIN , ADDR_H);


if (!okL || !okW || !okH) {
    Serial.println("One or more sensors failed to initialize");
  }
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    Serial.println("OLED init failed.");
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("MAAP-1 Ready");
  display.println("Place box, press button");
  display.display();

  setupCamera();
}

float readDimension( VL53L0X &sensor , float frameSpanMM) {
    int raw = sensor.readRangeSingleMillimeters();
  if (sensor.timeoutOccurred()) {
    return -1; 
  }
  float dimension = frameSpanMM - raw;
  if (dimension < 0) dimension = 0;
  return dimension; 
}

void takeProofPhoto (){
    if (!cameraReady) return ; 
    camera_fb_t *fb = esp_camera_fb_get();
    if(!fb){
        Serial.println("Photo capture failed");
        return; 
    }
    Serial.printf ("Photo capturd : %d bytes\n",
    fb->len); 
    esp_camera_fb_return(fb);}

void showResult(float L_cm, float W_cm, float H_cm, float volWeight) {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("MAAP-1 Result");
  display.print("L: "); display.print(L_cm, 1); display.println(" cm");
  display.print("W: "); display.print(W_cm, 1); display.println(" cm");
  display.print("H: "); display.print(H_cm, 1); display.println(" cm");
  display.println("----");
  display.print("Vol Wt: "); display.print(volWeight, 2); display.println(" kg");
  display.display();
}

void runDimensionCycle(){
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Measuring...");
  display.display();  

  float L_mm = readDimension(sensorL, FRAME_SPAN_L_MM);
  float W_mm = readDimension(sensorW, FRAME_SPAN_W_MM);
  float H_mm = readDimension(sensorH, FRAME_SPAN_H_MM);

  if (L_mm < 0 || W_mm <  0 || H_mm < 0){
       display.clearDisplay();
       display.setCursor(0, 0);
       display.println("Sensor error.");
       display.println("Try again.");
       display.display();
       return;
 }
   
  float L_cm = L_mm / 10.0;
  float W_cm = W_mm / 10.0;
  float H_cm = H_mm / 10.0;
  
  float volWeight = (L_cm * W_cm * H_cm) / 5000.0;

  serial.printf("L=%,.1fcm W=%.fcm H=%.fcm VolWt =%.2fkg\n", L_cm ,W_cm,H_cm, VolWeight); 
  showResult(L_cm, W_cm, H_cm, volWeight);
  takeProofPhoto();
}

void loop(){
 static bool lastButtonState = HIGH;
 bool currentButtonState = digitalRead(BUTTON_PIN);
 if(lastButtonState == HIGH && currentButtonState == LOW){
     delay(30); 
     if (digitalRead(BUTTON_PIN) == LOW){
        runDimensionCycle();
    }}
  lastButtonState= currentButtonState ; dealy(10);
}
















