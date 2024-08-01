int pin_led1v=13;
int pin_led2a=12;
int pin_led3r=14;
int pin_led4v=27;
int pin_led5a=26;
int pin_led6r=25;
void setup() {
Serial.begin(9600);
pinMode(pin_led1v, OUTPUT);
pinMode(pin_led2a, OUTPUT);
pinMode(pin_led3r, OUTPUT);
pinMode(pin_led4v, OUTPUT);
pinMode(pin_led5a, OUTPUT);
pinMode(pin_led6r, OUTPUT);
}
void loop(){
digitalWrite(pin_led1v, HIGH);
Serial.print("led dos:\tencendido \n");
digitalWrite(pin_led6r, HIGH);
Serial.print("led uno:\tencendido \n");
delay(2000);

digitalWrite(pin_led1v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led1v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led1v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led1v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led1v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led1v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led1v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led1v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led1v,LOW);
Serial.print("led uno:\tapagado \n");

digitalWrite(pin_led2a, HIGH);
Serial.print("led dos:\tencendido \n");
delay(1000);
digitalWrite(pin_led6r,LOW);
Serial.print("led uno:\tencendido \n");
digitalWrite(pin_led2a,LOW);
Serial.print("led dos:\tapagado \n");
digitalWrite(pin_led3r, HIGH);
Serial.print("led tres:\tencendido \n");
digitalWrite(pin_led4v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(2000);


digitalWrite(pin_led4v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led4v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led4v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led4v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led4v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led4v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led4v,LOW);
Serial.print("led uno:\tapagado \n");
delay(100);
digitalWrite(pin_led4v, HIGH);
Serial.print("led uno:\tencendido \n");
delay(100);
digitalWrite(pin_led4v,LOW);
Serial.print("led uno:\tapagado \n");

digitalWrite(pin_led5a, HIGH);
Serial.print("led dos:\tencendido \n");
delay(1000);
digitalWrite(pin_led5a,LOW);
Serial.print("led dos:\tapagado \n");

digitalWrite(pin_led3r,LOW);
Serial.print("led tres:\tapagado \n");
}






