#include <Servo.h>
Servo servomecatronicos;
Servo servoaire;

int led = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int i= 0;
int sensoragua;
 char mensaje;
 float sinVal;
int toneVal;
int zum = 8;
void setup() {
 servomecatronicos.attach(9);
 servoaire.attach(10);
 pinMode (led,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(led5,OUTPUT);
 pinMode(led6,OUTPUT);
 pinMode (zum,OUTPUT);
 Serial.begin(9600);
}
void loop() {
  
 if (Serial.available()>0){
  mensaje = Serial.read();
  //ON 
  if (mensaje == '1'){
  digitalWrite(led,HIGH);
  }
  if (mensaje == '2'){
 digitalWrite(led2,HIGH);
 }
 if(mensaje == '4'){
  digitalWrite(led3,HIGH);
 }
 if (mensaje=='6'){
  digitalWrite (led4,HIGH);
 }
 if (mensaje == '8'){
  digitalWrite(led5,HIGH);
 }
 if (mensaje == 'a'){
  digitalWrite(led6,HIGH);
 }
 if (mensaje == 'c'){
  for (int led = 2; led < 8; led++){
    digitalWrite(led,HIGH);
    delay(1000);
  }
 }
//ALARM
  if (mensaje== 'e'){
 int i= i++;

  tone(zum,261.63,i);
 }
if(mensaje =='f'){
  noTone(zum);
}
if (mensaje =='g'){
  
servomecatronicos.write(0);
 delay(5000*2);
 servomecatronicos.write(90);
 delay(5000*2);
 servomecatronicos.write(180);
 delay(5000*2);
}
if (mensaje =='h'){
  
servomecatronicos.write(0);
 delay(60000*5);
 servomecatronicos.write(90);
 delay(60000*5);
 servomecatronicos.write(180);
 delay(60000*5);
}
if (mensaje =='j'){
  
servomecatronicos.write(0);
 delay(60000*10);
 servomecatronicos.write(90);
 delay(60000*10);
 servomecatronicos.write(180);
 delay(60000*10);
}
//SERVO AIRE
if (mensaje =='k'){
  
servoaire.write(0);
 delay(5000*2);
 servoaire.write(90);
 delay(5000*2);
 servoaire.write(180);
 delay(5000*2);
}
if (mensaje =='m'){
  
servoaire.write(0);
 delay(60000*5);
 servoaire.write(90);
 delay(60000*5);
 servoaire.write(180);
 delay(60000*5);
}
if (mensaje =='n'){
  
servoaire.write(0);
 delay(60000*10);
 servoaire.write(90);
 delay(60000*10);
 servoaire.write(180);
 delay(60000*10);
}


 //OF
if ( mensaje == '0') {
 digitalWrite(led,LOW);
}
if (mensaje == '3'){
  digitalWrite(led2,LOW);
}
if (mensaje == '5'){
  digitalWrite(led3,LOW);
}
if(mensaje == '7'){
  digitalWrite(led4,LOW);
}
if (mensaje == '9'){
  digitalWrite(led5,LOW);
}
if (mensaje == 'b'){
  digitalWrite(led6,LOW);
}
 if (mensaje == 'd'){
  for (int led = 7; led >= 2; led--){
    digitalWrite(led,LOW);
    delay(1000);
  }
 }
}
}
