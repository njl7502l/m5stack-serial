#include <M5Core2.h>

void setup() { Serial.begin(115200); }
void loop() {
  for (int i = 0; i < 100; i++) {
    Serial.println(i);
    delay(100);
  }
}