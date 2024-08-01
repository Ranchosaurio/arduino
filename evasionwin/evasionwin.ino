//int sensor_1=34, sensor_2=35;
#define trig1 32
#define echo1 33
#define trig2 14
#define echo2 27
int transformar (int x, int y, int z);

int pin_pwm_1=25;
int pin_M1=12;
int pin_M2=13;
int frecuencia_1=500;
int canal_1=0;
int resolucion_1=12;
 

int pin_pwm_2=26;
int pin_M3=35;
int pin_M4=34;
int frecuencia_2=500;
int canal_2=0;
int resolucion_2=12;

int v= 1450;
int u = 650; 

void setup() {
pinMode(pin_M1,OUTPUT);
pinMode(pin_M2,OUTPUT);
ledcSetup(canal_1,frecuencia_1,resolucion_1);
ledcAttachPin(pin_pwm_1,canal_1);

pinMode(pin_M3,OUTPUT);
pinMode(pin_M4,OUTPUT);
ledcSetup(canal_2,frecuencia_2,resolucion_2);
ledcAttachPin(pin_pwm_2,canal_2);
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
//Serial.print("ultrasonico 1:"); Serial.println(transformar(trig1,echo1,0)); 
//Serial.print("ultrasonico 2:"); Serial.println(transformar(trig2,echo2,0)); 

if ((transformar (trig1,echo1,1)>10) && (transformar (trig2,echo2,1)>10)){ 
     ledcWrite(canal_1, v);
    ledcWrite(canal_2, v);
    digitalWrite(pin_M1, HIGH);
    digitalWrite(pin_M2, LOW);
    digitalWrite(pin_M3, HIGH);  
    digitalWrite(pin_M4, LOW);  
}
if ((transformar (trig1,echo1,1)<10) && (transformar (trig2,echo2,1)>10)){ 
     ledcWrite(canal_1, v);
    ledcWrite(canal_2, v);
    digitalWrite(pin_M1, LOW);
    digitalWrite(pin_M2, HIGH);
    digitalWrite(pin_M3, HIGH);  
    digitalWrite(pin_M4, LOW);  
}
if ((transformar (trig1,echo1,1)>10) && (transformar (trig2,echo2,1)<10)){ 
     ledcWrite(canal_1, v);
    ledcWrite(canal_2, v);
    digitalWrite(pin_M1, HIGH);
    digitalWrite(pin_M2, LOW);
    digitalWrite(pin_M3, LOW);  
    digitalWrite(pin_M4, HIGH);  
}
if ((transformar (trig1,echo1,1)<2) && (transformar (trig2,echo2,1)<2)){ 
     ledcWrite(canal_1, v);
    ledcWrite(canal_2, v);
    digitalWrite(pin_M1, LOW);
    digitalWrite(pin_M2, HIGH);
    digitalWrite(pin_M3, LOW);  
    digitalWrite(pin_M4, HIGH);  
}
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
    int distancia=duracion/58.2;
    resultado=distancia;
    Serial.println(resultado);

    return resultado;
  }
}
