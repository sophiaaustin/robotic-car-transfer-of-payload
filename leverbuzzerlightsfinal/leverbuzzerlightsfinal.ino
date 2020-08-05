/*
ENGR101 - Introduction to Engineering
Project: Robotic Car Transfer of Payload
Authors: Sophia Austin, Geoffrey Farmar, Narayan Gosai, and Natalie Crist
Overview of this part of the code: Lights, Buzzer, and Lever Code
Description of this part of the code: Lights flash, song
         "Happy Birthday" plays, lever arm moves to control
          placement of payload
*/

int speakerPin = 10;    
#include <Servo.h>          //include the servo library

int potPosition;           //this variable will store the position of the potentiometer
int servoPosition;         //the servo will move to this position

Servo myservo;              //create a servo object
//the pin that buzzer is connected to

void setup()
{
  pinMode(speakerPin, OUTPUT); 
  pinMode(9, OUTPUT);      // Set pin 13 to output
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  myservo.attach(11);   //set the output pin for the speaker
}

void loop()
{
   potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);
  //life is a highway  
  play('a', 2); 
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ha
  play('a', 2); 
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ppy
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//birth
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//day
 
  play('g', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//to
  play('f', 8);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//you
  
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//pause for 2 beats
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);

  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);
  play('g', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ha     
  play('f', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ppy
  play('f', 4);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//birth
  
  play('h', 4);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//day
  play('a', 6);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//to
  
  play(' ', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//you
  play('f', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//pause for 2 beats
  
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ha
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ppy
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//birth
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//day
  
  play('g', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//dear
  play('f', 8);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//your
  
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//name
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//pause for 2 beats
  play('a', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ha
  
  play('a', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//ppy
  play('g', 2);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//birth
  play('f', 2);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//day
  play('f', 4);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//to
  
  play('h', 4);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);//you
  play('a', 6);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);
  play(' ', 6);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);

 

  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);// Turn off the LED
 
}

void play( char note, int beats)
{
  int numNotes = 14;  // number of notes in our note and frequency array (there are 15 values, but arrays start at 0)
  
  //Note: these notes are C major (there are no sharps or flats)

  //this array is used to look up the notes
  char notes[] = { 'c', 'd', 'e', 'f','h', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B', ' '};
  //this array matches frequencies with each letter (e.g. the 4th note is 'f', the 4th frequency is 175)
  int frequencies[] = {131, 147, 165, 175, 185, 196, 220, 247, 262, 294, 330, 349, 392, 440, 494, 0};
  
  int currentFrequency = 0;    //the frequency that we find when we look up a frequency in the arrays
  int beatLength = 150;   //the length of one beat (changing this will speed up or slow down the tempo of the song)

  //look up the frequency that corresponds to the note
  for (int i = 0; i < numNotes; i++)  // check each value in notes from 0 to 14
  {
    if (notes[i] == note)             // does the letter passed to the play function match the letter in the array?
    {
      currentFrequency = frequencies[i];   // Yes! Set the current frequency to match that note
    }
  }

  //play the frequency that matched our letter for the number of beats passed to the play function
  tone(speakerPin, currentFrequency, beats * beatLength);   
  delay(beats* beatLength);   //wait for the length of the tone so that it has time to play
  delay(50);                  //a little delay between the notes makes the song sound more natural

}
 
/* CHART OF FREQUENCIES FOR NOTES IN C MAJOR
Note      Frequency (Hz)
c        131
d        147
e        165
f        175
g flat/h   185.5
g        196
a        220
b        247
C        262
D        294
E        330
F        349
G        392
A        440
B        494
