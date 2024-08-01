#include <BluetoothSerial.h>
#include <ESP32Servo.h> 
Servo myservo;
String dato;
#if defined(CONFIG_IDF_TARGET_ESP32S2) || defined(CONFIG_IDF_TARGET_ESP32S3)
#elif defined(CONFIG_IDF_TARGET_ESP32C3)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
int led_pin1=15;
int led_pin2=2;
int servoPin = 12; 
int pos = 0;


BluetoothSerial Bluetooth;

void setup() {
  pinMode(led_pin1,OUTPUT);
  pinMode(led_pin2,OUTPUT);
  Serial.begin(115200);
  Bluetooth.begin("ESP_32tacos"); //Bluetooth device name
  Serial.println("El dispositivo esta listo para vincularse");

  ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
  myservo.setPeriodHertz(50);
  myservo.attach(servoPin, 500, 2400);

    myservo.setPeriodHertz(50);// Standard 50hz servo
    myservo.attach(servoPin, 500, 2400);     
}

void loop(){
  
 
  if (Bluetooth.available()) {              //
    dato=Bluetooth.readStringUntil('\n');  //Prender,12
    Serial.print("Dato: ");
    Serial.println(dato);                 //Prender,12    
    int Posicion_slash1=dato.indexOf(','); //8
    int Posicion_slash2=dato.indexOf('/'); //8
    int Posicion_Salto=dato.length();     //10
    String Dato=dato.substring(0, Posicion_slash1);  // Dato= Prender
    int nl=dato.substring(Posicion_slash1+1,Posicion_Salto).toInt();//valor=12
    int pwm=dato.substring(Posicion_slash2+1).toInt();//valor=12

       

      
      
               
    if (Dato.equals("Prender")){
      if(nl==1){
        analogWrite(led_pin1, pwm);
      }
      else if (nl==2) {
        analogWrite(led_pin2, pwm);
      }
      else if (nl==3) {
        myservo.write(pwm);
      }
      }
      if (Dato.equals("Apagar")){
      if (nl==1){
        analogWrite(led_pin1, LOW);
      }
      else if (nl==2) {
        analogWrite(led_pin2, LOW);
      }
      else if (nl==3) {
        myservo.write(0);
      }
  }
  }
  }