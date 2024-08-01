int pin_lectura_1=34, lectura_1=0;
int pin_lectura_2=35, lectura_2=0;
float pl=32, lec=0;
int pin_led_1V=15;
int pin_led_2A=2;
int pin_led_3R=4;
int pin_led_4V=5;
int pin_led_5A=18;
int pin_led_6R=19;

int pin_pwm=14;
int pin1=25;
int pin2=26;
int frecuencia_1=500;
int canal=0;
int resolucion=12;
float potm=27, lec2=0;

void setup (){
  pinMode(pl,INPUT);
  pinMode( pin_lectura_1,INPUT);
  pinMode( pin_lectura_2,INPUT);
  Serial.begin(115200);
  pinMode(pin_led_1V,OUTPUT);
  pinMode(pin_led_2A,OUTPUT);
  pinMode(pin_led_3R,OUTPUT);
  pinMode(pin_led_4V,OUTPUT);
  pinMode(pin_led_5A,OUTPUT);
  pinMode(pin_led_6R,OUTPUT);
  
  pinMode(potm,INPUT);
  ledcSetup(canal,frecuencia_1,resolucion);
  ledcAttachPin(pin_pwm,canal);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);

}


void loop (){
  lec=analogRead(pl);
  Serial.print("El valor del potonciometro es: ");
  Serial.println(lec);
   lectura_1=digitalRead(pin_lectura_1);
  lectura_2=digitalRead(pin_lectura_2);



Serial.print("Lectura 1:  ");
Serial.println(lectura_1);
Serial.print("Lectura 2:  ");
Serial.println(lectura_2);

if (lec>=0 && lec<=1000){
  if((lectura_1==0 && lectura_2==0) || (lectura_1==0 && lectura_2==1)){
  digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,LOW);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_2A,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_1V,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_2A,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_3R,HIGH);
delay(500);

digitalWrite(pin_led_4V,HIGH);
delay(500);  
}
if((lectura_1==1 && lectura_2==0) || (lectura_1==1 && lectura_2==1)){
digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_5A,LOW);
digitalWrite(pin_led_6R,LOW);

digitalWrite(pin_led_1V,HIGH);
digitalWrite(pin_led_6R,HIGH);
delay(2000);

digitalWrite(pin_led_1V,LOW);
delay(100);
digitalWrite(pin_led_1V,HIGH);
delay(100);
digitalWrite(pin_led_1V,LOW);
delay(100);
digitalWrite(pin_led_1V,HIGH);
delay(100);
digitalWrite(pin_led_1V,LOW);
delay(100);
digitalWrite(pin_led_1V,HIGH);
delay(100);
digitalWrite(pin_led_1V,LOW);
delay(100);
digitalWrite(pin_led_1V,HIGH);
delay(100);

digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,HIGH);
delay(1000);

digitalWrite(pin_led_6R,LOW);
digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,HIGH);
digitalWrite(pin_led_4V,HIGH);
delay(2000);


digitalWrite(pin_led_4V,LOW);
delay(100);
digitalWrite(pin_led_4V,HIGH);
delay(100);
digitalWrite(pin_led_4V,LOW);
delay(100);
digitalWrite(pin_led_4V,HIGH);
delay(100);
digitalWrite(pin_led_4V,LOW);
delay(100);
digitalWrite(pin_led_4V,HIGH);
delay(100);
digitalWrite(pin_led_4V,LOW);
delay(100);
digitalWrite(pin_led_4V,HIGH);
delay(100);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_5A,HIGH);
delay(1000);

digitalWrite(pin_led_5A,LOW);
digitalWrite(pin_led_3R,LOW);
}
}
if (lec>=1001 && lec<=2500){
   digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_5A,LOW);
digitalWrite(pin_led_6R,LOW);

   lec2=analogRead(potm);
  ledcWrite(canal,lec2); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
 Serial.print("El valor del segundo potonciometro es: ");
  Serial.println(lec2);
}
if (lec>=2500 && lec<=4095){
   lec2=analogRead(potm);
  ledcWrite(canal,lec2); 
 Serial.print("El valor del segundo potonciometro es: ");
  Serial.println(lec2);
  if(lec2>=0 && lec2<=2000){
  digitalWrite(pin_led_1V,LOW);
  digitalWrite(pin_led_2A,LOW);
  digitalWrite(pin_led_3R,LOW);
  digitalWrite(pin_led_4V,LOW);
  digitalWrite(pin_led_5A,LOW);
  digitalWrite(pin_led_6R,LOW);
    ledcWrite(canal,4000); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
}
if(lec2>=2001 && lec2<=4095){
  digitalWrite(pin_led_1V,LOW);
  digitalWrite(pin_led_2A,LOW);
  digitalWrite(pin_led_3R,LOW);
  digitalWrite(pin_led_4V,LOW);
  digitalWrite(pin_led_5A,LOW);
  digitalWrite(pin_led_6R,LOW);
    ledcWrite(canal,4000); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
}
}
}