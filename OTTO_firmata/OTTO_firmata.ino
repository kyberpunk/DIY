#include <Otto_bea.h>
#include <Firmata.h>

#define OK_RESULT "ok"
#define NOK_RESULT "nok"
#define BUFF_LEN 16

Robot robot;
char buff[BUFF_LEN] = "";

void ok() {
  Firmata.sendString(OK_RESULT);
}

void nok() {
  Firmata.sendString(NOK_RESULT);
}

void stringCallback(char *myString) {
  if (strcmp(myString, "probudse") == 0) {
    robot.probud_se();
    robot.zpivej(Z_PRIPOJENY);
    ok();
    return;
  }
  if (strcmp(myString, "srovnejse") == 0) {
    robot.srovnej_se();
    ok();
    return;
  }
  if (strcmp(myString, "jdi-dopredu") == 0) {
    robot.jdi(1, DOPREDU);
    ok();
    return;
  }
  if (strcmp(myString, "jdi-dozadu") == 0) {
    robot.jdi(1, DOZADU);
    ok();
    return;
  }
  if (strcmp(myString, "zatoc-doprava") == 0) {
    robot.zatoc(1, PRAVA);
    ok();
    return;
  }
  if (strcmp(myString, "zatoc-doleva") == 0) {
    robot.zatoc(1, LEVA);
    ok();
    return;
  }
  if (strcmp(myString, "nahnise-doprava") == 0) {
    robot.nahni_se(PRAVA);
    ok();
    return;
  }
  if (strcmp(myString, "nahnise-doleva") == 0) {
    robot.nahni_se(LEVA);
    ok();
    return;
  }
  if (strcmp(myString, "skoc") == 0) {
    robot.skoc();
    ok();
    return;
  }
  if (strcmp(myString, "zatresnohou-doprava") == 0) {
    robot.zatres_nohou(PRAVA);
    ok();
    return;
  }
  if (strcmp(myString, "zatresnohou-doleva") == 0) {
    robot.zatres_nohou(LEVA);
    ok();
    return;
  }
  if (strcmp(myString, "moonwalk-doprava") == 0) {
    robot.moonwalk(PRAVA);
    ok();
    return;
  }
  if (strcmp(myString, "moonwalk-doleva") == 0) {
    robot.moonwalk(LEVA);
    ok();
    return;
  }
  if (strcmp(myString, "distance") == 0) {
    int distance = (int)robot.ziskej_vzdalenost();
    String(distance).toCharArray(buff, BUFF_LEN);
    Firmata.sendString(buff);
    return;
  }
  if (strcmp(myString, "gesto-stastny") == 0) {
    robot.udelej_gesto(G_STASTNY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-vstastny") == 0) {
    robot.udelej_gesto(G_VELMI_STASTNY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-smutny") == 0) {
    robot.udelej_gesto(G_SMUTNY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-nastvany") == 0) {
    robot.udelej_gesto(G_NASTVANY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-zklamany") == 0) {
    robot.udelej_gesto(G_ZKLAMANY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-zmateny") == 0) {
    robot.udelej_gesto(G_ZMATENY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-zamilovany") == 0) {
    robot.udelej_gesto(G_ZAMILOVANY);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-vitezstvi") == 0) {
    robot.udelej_gesto(G_VITEZSTVI);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-spanek") == 0) {
    robot.udelej_gesto(G_SPANEK);
    ok();
    return;
  }
  if (strcmp(myString, "gesto-podrazdeny") == 0) {
    robot.udelej_gesto(G_PODRAZDENY);
    ok();
    return;
  }
   if (strcmp(myString, "zvuk-stastny") == 0) {
    robot.zpivej(Z_STASTNY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-vstastny") == 0) {
    robot.zpivej(Z_VELMI_STASTNY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-smutny") == 0) {
    robot.zpivej(Z_SMUTNY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-pripojeny") == 0) {
    robot.zpivej(Z_PRIPOJENY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-odpojeny") == 0) {
    robot.zpivej(Z_ODPOJENY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-prekvapeny") == 0) {
    robot.zpivej(Z_PREKVAPENY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-pritulny") == 0) {
    robot.zpivej(Z_PRITULNY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-ohooh") == 0) {
    robot.zpivej(Z_OHOOH);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-spanek") == 0) {
    robot.zpivej(Z_SPANEK);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-zmateny") == 0) {
    robot.zpivej(Z_ZMATENY);
    ok();
    return;
  }
  if (strcmp(myString, "zvuk-prd") == 0) {
    robot.zpivej(Z_PRD);
    ok();
    return;
  }
  nok();
}

void setup() {
  Firmata.setFirmwareVersion(FIRMATA_FIRMWARE_MAJOR_VERSION, FIRMATA_FIRMWARE_MINOR_VERSION);
  Firmata.attach(STRING_DATA, stringCallback);
  Firmata.begin(57600);
}

void loop() {  
  while (Firmata.available()) {
    Firmata.processInput();
  }
}
