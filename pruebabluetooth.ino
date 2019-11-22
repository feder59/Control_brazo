

#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

char Estado; 
int grado1=90;
int grado2=90;
int grado3=90;
int grado4=90;


void setup() {
Serial.begin(9600);
Servo1.attach(11);
Servo2.attach(10);
Servo3.attach(9);
Servo4.attach(6);
Servo1.write(grado1);
Servo2.write(grado2);
Servo3.write(grado3);
Servo4.write(grado4);

}

void loop() {
  if(Serial.available()>0){
    Estado = Serial.read();
  }
  delay(100);          
  switch (Estado)
  {
  case '0':
    grado1-=5;
        if(grado1 < 0)
        grado1 = 0;
    Servo1.write(grado1);
    Estado='Q';
    break;
  case '1':
    grado1+=5;
       if(grado1>180)
        grado1 = 180;
    Servo1.write(grado1);
     Estado='Q';
  break;
  
  case '2':
    grado2-=5;
       if(grado2<0)
        grado2 = 0;
    Servo2.write(grado2);
     Estado='Q';
  break;
  case '3':
    grado2+=5;
       if(grado2>180)
        grado2 = 180;
    Servo2.write(grado2);
     Estado='Q';
  break;
  
  case '4':
    grado3-=5;
       if(grado3<0)
        grado3 = 0;
    Servo3.write(grado3);
     Estado='Q';       
  break;
   case '5':
    grado3+=5;
       if(grado3 < 0)
        grado3 = 0;
    Servo3.write(grado3);
     Estado='Q';
    break;
    
  case '6':
    grado4-=5;
       if(grado4<0)
        grado4 = 0;
    Servo4.write(grado4);
     Estado='Q';
  break;
  case '7':
    grado4+=5;
       if(grado4>180)
        grado4 = 180;
    Servo4.write(grado4);
    Estado='Q';
  break;
  default:
  break;
  }
  
}
