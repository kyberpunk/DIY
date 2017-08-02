//----------------------------------------------------------------
// Code to put all 4 servos in home position (90 degrees)
//-----------------------------------------------------------------
#include <Otto_bea.h>

Robot robot;

void setup(){
  // spusteni robota
  robot.probud_se();
  // nastaveni do zakladni polohy
  robot.srovnej_se();
  // zvuk
  robot.zpivej(Z_PRIPOJENY)
}

void loop() {  
  // zde piste vase prikazy:

  // priklad chuze
  robot.jdi(1, DOPREDU);
}
