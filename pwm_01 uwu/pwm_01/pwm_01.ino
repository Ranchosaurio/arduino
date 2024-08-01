int pin_pwm=14;
int frecuencia_1=50;
int canal=0;
int resolucion=2;
void setup() {
  ledcSetup(canal,frecuencia_1,resolucion);
  ledcAttachPin(pin_pwm,canal);
}

void loop() {
  ledcWrite(canal,56); 

}
