#include <microDS18B20.h>

#define DS18B20_PIN 2

MicroDS18B20<DS18B20_PIN> SENSOR;

void setup() {
  Serial.begin(9600);
}

void loop() {
  SENSOR.requestTemp();
  delay(1000);

  Serial.print("TEMP: ");
  if (SENSOR.readTemp()) 
    Serial.println(SENSOR.getTemp());
  else 
    Serial.println("ERROR!");
}
