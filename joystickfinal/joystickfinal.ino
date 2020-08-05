/*
ENGR101 - Introduction to Engineering
Project: Robotic Car Transfer of Payload
Authors: Sophia Austin, Geoffrey Farmar, Narayan Gosai, and Natalie Crist
Overview of this part of the code: Joystick
Description of this part of the code: Joystick movements correspond
         with movements of the robotic car
*/

//the right motor will be controlled by the motor A pins on the motor driver
const int AIN1 = 13;           //control pin 1 on the motor driver for the right motor
const int AIN2 = 12;            //control pin 2 on the motor driver for the right motor
const int PWMA = 11;            //speed control pin on the motor driver for the right motor

//the left motor will be controlled by the motor B pins on the motor driver
const int PWMB = 10;           //speed control pin on the motor driver for the left motor
const int BIN2 = 9;           //control pin 2 on the motor driver for the left motor
const int BIN1 = 8;           //control pin 1 on the motor driver for the left motor

const int joyXPin = A0; //Analog input pin for joystick X pot
const int joyYPin = A1; //Analog input pin for joystick Y pot

int joyXValue = 0; //value read from the pot, scaled to 511.5
int joyYValue = 0; //value read from the pot, scaled to 511.5

int mapXValue = 0; //scaled -255 to 255
int mapYValue = 0; //scaled -255 to 255

/********************************************************************************/
void setup()
{
  //set the motor contro pins as outputs
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  Serial.begin(9600);           //begin serial communication with the computer
}

/********************************************************************************/
void loop()
{
      //read analog in pins
      joyXValue = analogRead(joyXPin);
      joyYValue = analogRead(joyYPin);
      
      //scale to motor values
      mapXValue = map (joyXValue, 0, 1023, -255, 255);
      mapYValue = map (joyYValue, 0, 1023, -255, 255);

      Serial.print (" mapXValue = "); //prints the value of mapXValue to the screen
      Serial.println(mapXValue);
      Serial.print (" mapYValue = "); //prints the value of mapYValue to the screen
      Serial.println(mapYValue);

      
      if(mapXValue < 20 && mapYValue < -200) //forward //4,-255                         //if the entered direction is forward                          
      {
        rightMotor(200);                                //drive the right wheel forward
        leftMotor(200);                                 //drive the left wheel forward
      }
      else if(mapXValue < 15 && mapYValue > 220) //backward //4,255                   //if the entered direction is backward  
      {
        rightMotor(-200);                               //drive the right wheel forward
        leftMotor(-200);                                //drive the left wheel forward
      }
      else if(mapXValue > 200 && mapYValue < 20) //right //255,4                      //if the entered direction is right  
      {
        rightMotor(-150);                               //drive the right wheel forward
        leftMotor(200);                                 //drive the left wheel forward
      }
      else if(mapXValue < -200 && mapYValue < 20) //left //-255,4                    //if the entered direction is left  
      { 
        rightMotor(200);                               //drive the right wheel forward
        leftMotor(-150);                                //drive the left wheel forward
      }
  else
  {
     rightMotor(0);                                  //turn the right motor off
     leftMotor(0);                                   //turn the left motor off 
  }
}
/********************************************************************************/
void rightMotor(int motorSpeed)                       //function for driving the right motor
{
  if (motorSpeed > 0)                                 //if the motor should drive forward (positive speed)
  {
    digitalWrite(AIN1, HIGH);                         //set pin 1 to high
    digitalWrite(AIN2, LOW);                          //set pin 2 to low
  }
  else if (motorSpeed < 0)                            //if the motor should drive backwar (negative speed)
  {
    digitalWrite(AIN1, LOW);                          //set pin 1 to low
    digitalWrite(AIN2, HIGH);                         //set pin 2 to high
  }
  else                                                //if the motor should stop
  {
    digitalWrite(AIN1, LOW);                          //set pin 1 to low
    digitalWrite(AIN2, LOW);                          //set pin 2 to low
  }
  analogWrite(PWMA, abs(motorSpeed));                 //now that the motor direction is set, drive it at the entered speed
}

/********************************************************************************/
void leftMotor(int motorSpeed)                        //function for driving the left motor
{
  if (motorSpeed > 0)                                 //if the motor should drive forward (positive speed)
  {
    digitalWrite(BIN1, HIGH);                         //set pin 1 to high
    digitalWrite(BIN2, LOW);                          //set pin 2 to low
  }
  else if (motorSpeed < 0)                            //if the motor should drive backwar (negative speed)
  {
    digitalWrite(BIN1, LOW);                          //set pin 1 to low
    digitalWrite(BIN2, HIGH);                         //set pin 2 to high
  }
  else                                                //if the motor should stop
  {
    digitalWrite(BIN1, LOW);                          //set pin 1 to low
    digitalWrite(BIN2, LOW);                          //set pin 2 to low
  }
  analogWrite(PWMB, abs(motorSpeed));                 //now that the motor direction is set, drive it at the entered speed
}
