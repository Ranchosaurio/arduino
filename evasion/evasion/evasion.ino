//int sensor_1=34, sensor_2=35;
#define trig1 32
#define echo1 33
#define trig2 27
#define echo2 14
int transformar (int x, int y, int z);
void setup() {
//pinMode(sensor_1, INPUT);
//pinMode(sensor_2, INPUT);
pinMode(trig1, OUTPUT);
pinMode(echo1, INPUT);
pinMode(trig2, OUTPUT);
pinMode(echo2, INPUT);
Serial.begin(115200);
}
void loop() {
//Serial.print("infrarrojo 1= "); Serial.print(transformar(sensor_1,0,1)); 
//Serial.print("infrarrojo 2= "); Serial.print(transformar(sensor_2,0,1)); 
Serial.print("ultrasonico 1:"); Serial.println(transformar(trig1,echo1,0)); 
Serial.print("ultrasonico 2:"); Serial.println(transformar(trig2,echo2,0)); 
}
int transformar(int x, int y, int z){
  int resultado=0;
  if(z==1){
    digitalWrite(x,0);
    delayMicroseconds(5);

     digitalWrite(x,1);
    delayMicroseconds(10);

    digitalWrite(x,0);
    int duracion=pulseIn(y,HIGH);
    int distancia=duracion*0.034/2;
    resultado=distancia;
    return resultado;
  }
}
