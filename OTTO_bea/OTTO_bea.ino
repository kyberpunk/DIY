#include <Otto_bea.h>

Robot robot;

void setup(){
  // funkce setup se provede pouze jednou po spusteni programu
  // spusteni robota
  robot.probud_se();
  // nastaveni do zakladni polohy
  robot.srovnej_se();
  // zvuk
  robot.zpivej(Z_PRIPOJENY);
}

void loop() {  
  // funkce loop se opakuje do nekonecna
  // zde piste vase prikazy:

  // priklad chuze
  robot.jdi(1, DOPREDU);
}
