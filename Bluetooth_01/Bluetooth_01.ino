
#include <BluetoothSerial.h>
String dato;
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
int Led_pin_1=15;
int Led_pin_2=2;
int Led_pin_3=4;
BluetoothSerial Bluetooth;

int pin_pwm=14;
int frecuencia_1=500;
int canal1=0;
int canal2=0;
int canal3=0;
int resolucion=12;

void setup() {
  pinMode(Led_pin_1,OUTPUT);
   pinMode(Led_pin_2,OUTPUT);
    pinMode(Led_pin_3,OUTPUT);
  Serial.begin(115200);
  Bluetooth.begin("ESP_32:,c"); //Bluetooth device name
  Serial.println("El dispositivo esta listo para vincularse");
}

void loop() {
  
    //Bluetooth.write(Serial.read());
 
  if (Bluetooth.available()) {              //
    dato=Bluetooth.readStringUntil('\n');  //Prender,12
    Serial.print("Dato: ");
    Serial.println(dato);                 //Prender,12    
    int Posicion_slash1=dato.indexOf(','); //8
     int Posicion_slash2=dato.indexOf('.'); //8
    int Posicion_Salto=dato.length();     //10
    String Dato=dato.substring(0,Posicion_slash);  // Dato= Prender
    int valor1=dato.substring(Posicion_slash1+1,Posicion_Salto).toInt();//valor=12
    int valor2=dato.substring(Posicion_slash2+1,Posicion_Salto).toInt();//valor=12
    
    if (Dato.equals("Prender")){
      digitalWrite(Led_pin_1,HIGH);
      
      }
     if (Dato.equals("Apagar")){
      digitalWrite(Led_pin_1,LOW);
      
      }
      }

 
}
