int giro(int x, int y);
int pin_pwm=14;
int pin1=25;
int pin2=26;
int frecuencia_1=500;
int canal=0;
int resolucion=12;
int potm=27, lec2=0;

void setup (){
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  Serial.begin(115200);
  pinMode(potm,INPUT);
  ledcSetup(canal,frecuencia_1,resolucion);
  ledcAttachPin(pin_pwm,canal);
}

void loop (){
  int res= giro(potm);
  ledcWrite(canal,res); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  Serial.print("El valor del segundo potonciometro es: ");
  }

int giro(int x){
  int girom = x;
lec2=analogRead(x);
if (lec2>=2396 && lec2<=4095){
  girom=lec2;
}
 if (lec2>=0 && lec2<=2395){
 girom=lec2+1700;
  }
return girom;
}