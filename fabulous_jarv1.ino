#include  <Servo.h>
Servo servo1;
Servo servo3;
Servo servo5;
Servo servo6;
Servo servo7;

int potpin1=A0;
int potpin3=A1;
int potpin5=A2;
int potpin6=A3;
int potpin7=A4;

int valpotpin1;
int valpotpin3;
int valpotpin5;
int valpotpin6;
int valpotpin7;

void setup()
{
servo1.attach(6);
servo3.attach(5);
servo5.attach(4);
servo6.attach(3);
servo7.attach(2);
}
void loop()
{
valpotpin1= analogRead (potpin1);
valpotpin1= map (valpotpin1, 0,1023,0,90);
servo1.write(valpotpin1);
delay(15);

valpotpin3= analogRead (potpin3);
valpotpin3= map (valpotpin3 ,  0 , 1023,  0, 90);
servo3.write(valpotpin3);
delay(15);

valpotpin5 = analogRead (potpin5); 

valpotpin5= map (valpotpin5, 0,1023,0,90);
servo5.write(valpotpin5);
delay(15);

valpotpin6= analogRead (potpin6);
valpotpin6= map (valpotpin6, 0,1023,0,90);
servo6.write(valpotpin6);
delay(15);

valpotpin7= analogRead (potpin7);
valpotpin7= map (valpotpin7, 0,1023,0,90);
servo7.write(valpotpin7);
delay(15);

}


