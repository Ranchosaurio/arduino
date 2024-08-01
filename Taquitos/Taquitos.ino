float pl=14, lec=0;
int pin_led_1V=15;
int pin_led_2A=2;
int pin_led_3R=4;
int pin_led_4V=5;
int pin_led_5A=18;
int pin_led_6R=19;
float vt=0;

void setup (){
  pinMode(pl,INPUT);
  Serial.begin(115200);
  pinMode(pin_led_1V,OUTPUT);
  pinMode(pin_led_2A,OUTPUT);
  pinMode(pin_led_3R,OUTPUT);
  pinMode(pin_led_4V,OUTPUT);
  pinMode(pin_led_5A,OUTPUT);
  pinMode(pin_led_6R,OUTPUT);

}


void loop (){
  lec=analogRead(pl);
  vt=analogRead(pl);
  vt=lec/819;
  Serial.print("El valor: ");
  Serial.println(vt);

  if (vt>=0 && vt<=1.22100122){
digitalWrite(pin_led_1V,HIGH);
digitalWrite(pin_led_2A,HIGH);
digitalWrite(pin_led_3R,HIGH);
digitalWrite(pin_led_4V,HIGH);
digitalWrite(pin_led_5A,HIGH);
digitalWrite(pin_led_6R,HIGH);
}


if (vt>=1.22100123 && vt<=2.44200244){

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

if (vt>=2.44200245 && vt<=3.66300367){
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
if (vt>=3.66300367 && vt<=5){

digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_5A,LOW);
digitalWrite(pin_led_6R,LOW);

digitalWrite(pin_led_1V,HIGH);
delay(500);

digitalWrite(pin_led_1V,LOW);
digitalWrite(pin_led_2A,HIGH);
delay(500);

digitalWrite(pin_led_2A,LOW);
digitalWrite(pin_led_3R,HIGH);
delay(500);

digitalWrite(pin_led_3R,LOW);
digitalWrite(pin_led_4V,HIGH);
delay(500);

digitalWrite(pin_led_4V,LOW);
digitalWrite(pin_led_5A,HIGH);
delay(500);
digitalWrite(pin_led_5A,LOW);
digitalWrite(pin_led_6R,HIGH);
delay(500);
digitalWrite(pin_led_6R,LOW);
}

}