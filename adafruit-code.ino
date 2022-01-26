#include <bluefruit.h>

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Start!");
  
  Bluefruit.begin();
  Bluefruit.setName("Nano 33 iot");
  
  startAdvertising();
}

void loop() {
    
}

void startAdvertising(void) {
  Bluefruit.Advertising.addFlags(BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE);
  Bluefruit.Advertising.addTxPower();
  Bluefruit.Advertising.restartonDisconnect(true);
  Bluefruit.Advertising.setInterval(32, 244);
  Bluefruit.Advertising.setFastTimeout(30);
  Bluefruit.Advertising.start(0);
  
}
