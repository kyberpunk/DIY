#ifndef OTTOBEA_H
#define OTTOBEA_H

// nastaveni pinu servomotorku
#define PIN_YL 2 //servo[2]
#define PIN_YR 3 //servo[3]
#define PIN_RL 4 //servo[4]
#define PIN_RR 5 //servo[5]

// smer pohybu
#define DOPREDU 1
#define DOZADU -1

// smer pohybu do stran
#define PRAVA 1
#define LEVA-1

// zvuky
#define Z_PRIPOJENY        0
#define Z_ODPOJENY         1
#define Z_PREKVAPENY       6
#define Z_PRITULNY         9
#define Z_OHOOH            7
#define Z_SPANEK           10
#define Z_STASTNY          11
#define Z_VELMI_STASTNY    12
#define Z_SMUTNY           14
#define Z_ZMATENY          15
#define Z_PRD              16

// gesta
#define G_STASTNY          0
#define G_VELMI_STASTNY    1
#define G_SMUTNY           2
#define G_NASTVANY         7
#define G_ZKLAMANY         12
#define G_ZMATENY          5
#define G_ZAMILOVANY       6
#define G_VITEZSTVI        11
#define G_SPANEK           3
#define G_PODRAZDENY       8

class Robot
{
public:
	// inicializace
	void probud_se();

	// pohyby
	void srovnej_se();
	void jdi(int pocet_kroku, int smer);
	void zatoc(int pocet_kroku, int strana);
	void nahni_se(int strana);
	void skoc();
	void zatres_nohou(int strana);
	void moonwalk(int strana);

	// senzory
	float ziskej_vzdalenost();
	double stav_baterie();

	// gesta
	void udelej_gesto(int gesto);

	// zvuky
	void zpivej(int zvuk);
};

#endif // OTTOBEA_H
