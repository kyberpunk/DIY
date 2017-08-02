#include "Otto_bea.h"
#include <Otto.h>

#define DURATION 1000

Otto Otto;

void Robot::probud_se() {
	Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, -1, 10, 8, 9);
}

void Robot::srovnej_se() {
	Otto.home();
}

void Robot::jdi(int pocet_kroku, int smer) {
	Otto.walk(pocet_kroku, DURATION, smer);
}

void Robot::zatoc(int pocet_kroku, int strana) {
	Otto.turn(pocet_kroku, 2000, strana);
}

void Robot::nahni_se(int strana) {
	Otto.bend(1, 1400, strana);
};

void Robot::skoc() {
	Otto.jump(1, 2000);
}

void Robot::zatres_nohou(int strana) {
	Otto.shakeLeg(1, 2000, strana);
}

void Robot::moonwalk(int strana) {
	Otto.moonwalker(1, 900, 20, strana);
}

float Robot::ziskej_vzdalenost() {
	Otto.getDistance();
}

double Robot::stav_baterie() {
	Otto.getBatteryLevel();
}

void Robot::udelej_gesto(int gesto) {
	Otto.playGesture(gesto);
}

void Robot::zpivej(int zvuk) {
	Otto.sing(zvuk);
}
