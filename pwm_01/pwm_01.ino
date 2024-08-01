int pin_pwm=14;
int pin1=25;
int pin2=26;
int tau=500;
int canal=0;
int resolucion=12;

void setup() {
  pinMode(potm,INPUT);
  ledcSetup(canal,tau,resolucion);
  ledcAttachPin(pin_pwm,canal);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ledcWrite(canal,4000); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);


}
