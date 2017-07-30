#include "Otto_bea.h"
#include <Otto.h>

#define DURATION 1000

Otto otto;

void Otto::probud_se() {
	Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, -1, 10, 8, 9);
}

void Otto::srovnej_se() {
	Otto.home();
}

void Otto::jdi(int pocet_kroku, int smer) {
	Otto.walk(pocet_kroku, DURATION, smer);
}
