int sensor_1=34, sensor_2=35;
#define trig 32
#define echo 33
int transformar (int x, int y, int z);
void setup() {
pinMode(sensor_1, INPUT);
pinMode(sensor_2, INPUT);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(115200);
}
void loop() {
Serial.print("infrarrojo 1= "); Serial.print(transformar(sensor_1,0,1)); 
Serial.print("infrarrojo 2= "); Serial.print(transformar(sensor_2,0,1)); 
Serial.print("ultrasonico "); Serial.println(transformar(trig,echo,0)); 
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
