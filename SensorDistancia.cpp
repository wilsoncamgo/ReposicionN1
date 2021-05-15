#include "Arduino.h"
#include "SensorDistancia.h"

SensorDistancia::SensorDistancia(int pinesConexion1, int pinesConexion2, double valorSensado, boolean ondaLanzada){
  this.pinesConexion1=pinesConexion1;
  this.pinesConexion2=pinesConexion2;
  this.valorSensado=valorSensado;
  this.ondaLanzada=ondaLanzada;
  
}
SensorDistancia::inicializar(){
  pinMode(this.pinesConexion1,INPUT);
  pinMode(this.pinesConexion2,INPUT);
}
SensorDistancia::getValorSensado(){
  return this.valorSensado;
}
SensorDistancia::distancia(){
  int distancia=this.valorSensado*0.5;
  return distancia;
}
SensorDistancia::setOndaLanzada(boolean lanzada){
  this.ondaLanzada=lanzada;
}
SensorDistancia::getOndaLanzada(){
  return ondaLanzada;
}
SensorDistancia::setPinesConexion(int eleccion, int pinModificar){
  if(eleccion==1){
    this.pinesConexion1=pinModificar;
  }else{
    this.pinesConexion2=pinModificar;
  }
}
