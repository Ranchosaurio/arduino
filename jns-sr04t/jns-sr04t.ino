#define trigPin 2
#define echoPin 3
long duration;
int distance;
void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print(" Distancia: ");
  Serial.print(distance);
  Serial.print(" cms ");
  delay(100);
}
