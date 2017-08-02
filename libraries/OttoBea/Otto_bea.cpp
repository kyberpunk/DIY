#include "Otto_bea.h"
#include <Otto.h>

#define DURATION 1000

Otto Otto;

void Robot::probud_se() {
	Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, -1, 10, 8, 9);
	return;
}

void Robot::srovnej_se() {
	Otto.home();
	return;
}

void Robot::jdi(int pocet_kroku, int smer) {
	Otto.walk(pocet_kroku, DURATION, smer);
	return;
}

void Robot::zatoc(int pocet_kroku, int strana) {
	Otto.turn(pocet_kroku, 1000, strana);
	return;
}

void Robot::nahni_se(int strana) {
	Otto.bend(1, 1400, strana);
	return;
};

void Robot::skoc() {
	Otto.jump(1, 1000);
	return;
}

void Robot::zatres_nohou(int strana) {
	Otto.shakeLeg(1, 1000, strana);
	return;
}

void Robot::moonwalk(int strana) {
	Otto.moonwalker(1, 900, 20, strana);
	return;
}

float Robot::ziskej_vzdalenost() {
	return Otto.getDistance();
}

double Robot::stav_baterie() {
	return Otto.getBatteryLevel();
}

void Robot::udelej_gesto(int gesto) {
	Otto.playGesture(gesto);
	return;
}

void Robot::zpivej(int zvuk) {
	Otto.sing(zvuk);
	return;
}
