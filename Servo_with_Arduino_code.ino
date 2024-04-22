/*

Code By: *----- ANTOR MONDAL -----*

E-mail: antor.mondal2002@gmail.com

Facebook: https://www.facebook.com/antor31021/
LinkedIn: www.linkedin.com/in/antor-mondal-084764287

N.B: Please do not use this code for business puepose 

*/


#include <Servo.h> //Including servo library

Servo servo; //declare the name of the servo

void setup()
{
 servo.attach(4); //define the signal pin. Any pin which can give the digital output be use.
}

void loop()
{
  servo.write(0); //set your desired degree
  delay(200); // set the delay you need
  servo1.write(180); //set your desired degree
  delay(1000); //set the delay you need
}