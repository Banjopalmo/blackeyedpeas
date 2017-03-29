/* Qu'est-ce que c'est qu'on veut faire en vrai:
 *  
 *  1 - smiley qui fait genre :| 
 *  4 - affiche le code
 *  5 V smiley qui crie 
 *  6 V fuck 
 *  9 - Demande le code -- boucle tant qu'erreur -- rappel après 5 erreurs
 *  10 V Alien
 *  11 - Surprise
 *  
 */

#include <Servo.h>
#include <LedControl.h>

Servo myServo;
LedControl lc = LedControl(12,11,10,1);

int const switchPin = 3;
int angle;
const int buzzer = 6;
bool alreadyPlayed = false;
bool switchEntered = false;
int switchVal;
int alienIndex = 0;
int scenario = 0;
          
void setup() {
  myServo.attach(9);
  Serial.begin(9600);

  // the zero refers to the MAX7219 number, it is zero for 1 chip
  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,8);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen

  pinMode(buzzer, OUTPUT);
}

void loop() {
  switchVal = digitalRead(switchPin);
  if(switchVal == 1){
    angle = 179;
    if(switchEntered == false){
    // set the servo position
      myServo.write(angle);
      switchEntered = true;
      switch (scenario){
        case 0: 
          if(alreadyPlayed == false){
            screamAndShout();
            alreadyPlayed = true;
          }
          scenario++;
          break;
        case 1: 
          alienIndex = 0;
          alien();
          scenario++;
          break;
        case 2:
          if(alreadyPlayed == false){
            fuck();
            alreadyPlayed = true;
          }
          scenario++;
          break;
        default:
          break;
      }
    }
  } else {
    alreadyPlayed = false;
    switchEntered = false;
    angle = 0;
    // set the servo position
    myServo.write(angle);
  
    lc.setRow(0,0,B00111100);
    lc.setRow(0,1,B01000010);
    lc.setRow(0,2,B10100101);
    lc.setRow(0,3,B10000001);
    lc.setRow(0,4,B10100101);
    lc.setRow(0,5,B10011001);
    lc.setRow(0,6,B01000010);
    lc.setRow(0,7,B00111100);
  }

}
