#include <SensorDistancia.h>
SensorDistancia sensorAlcoba;
void setup() {
sensorAlcoba=SensorDistancia(13,12,0.0,false);
Serial.begin(9600);

}

void loop() {
sensorAlcoba.getValorSensado();
}
