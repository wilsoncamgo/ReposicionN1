#ifndef SensorDistancia_h
#define SensorDistancia_h

#include "Arduino.h"
//Sensor HC-SR04
class SensorDistancia{
  private:
    int pinesConexion1;
    int pinesConexion2;
    double valorSensado;
    boolean ondaLanzada;
  public:
    SensorDistancia(int pinesConexion1,int pinesConexion2,double valorSensado, boolean ondaLanzada);
    double getValorSensado();
    int distancia();
    void setOndaLanzada(boolean lanzada);
    boolean getOndaLanzada();
    void setPinesConexion(int eleccion, int pinModificar);
    void inicializar();
};
#endif
