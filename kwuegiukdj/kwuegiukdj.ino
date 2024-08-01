int giro(int x, int y);
int pin_pwm=14;
int pin1=25;
int pin2=26;
int frecuencia_1=500;
int canal=0;
int resolucion=12;
float potm=27, lec2=0;

void setup (){
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  Serial.begin(115200);
  pinMode(potm,INPUT);
  ledcSetup(canal,frecuencia_1,resolucion);
  ledcAttachPin(pin_pwm,canal);
}

void loop (){
  if (lec2>=0 && lec2<=2395){
  lec2=analogRead(potm);
  int fx=lec2, fy=1700;
  int res=giro (fx,fy);
  ledcWrite(canal,res); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  Serial.print("El valor del segundo potonciometro es: ");
  Serial.println(lec2);
  }
   if (lec2>=2396 && lec2<=4095){
  lec2=analogRead(potm);
  int fx=lec2, fy=0;
  int res=giro (fx,fy); 
  ledcWrite(canal,res); 
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  Serial.print("El valor del segundo potonciometro es: ");
  Serial.println(lec2);
  }
}

int giro(int x,int y){
int girof=x+y;
return girof;
}