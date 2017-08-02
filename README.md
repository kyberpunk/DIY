# Robot Otto

Repozitář obsahuje fork open-source projektu Otto DIY (https://github.com/OttoDIY). Tato verze knihovně přepsanou do českého jazyka pro aktivity pro příměstský dětský tábor.

Návod na stavbu robota najdete zde http://www.instructables.com/id/Otto-Build-You-Own-Robot-in-Two-Hours/.

Ve složce OTTO_bea najdete ukázkový soubor OTTO_bea.ino, který slouží jako šablona pro programování robota.

## Programování v Arduino IDE

Arduino se programuje pomocí zjednodušeného jazyka C tzv. Wiring.

### Komentáře

Umožňují komentování kódu pro lepší přehlednost

```
// komentar programatora zacina //

```

### Promměnné

Slouží pro práci s daty a jejich ukládání za běhu programu kódu.

```
// cele cislo
int cislo = 1;

// desetinne cislo male
float cislo1 = 0.5;

// desetinne cislo velke
double cislo2 = 0.5;

// znak
char znak = 'A';

// text
char[] text = "text";
```

### Funkce

Funkce rerezentuje nějakou činnost. Může obsahovat parametry, které potom použije.

```
funkce1();
funkce2(parametr1, parametr2);
```

Funkce může vracet hodnotu, kterou uložíme do proměnné.

```
int promenna = funkce();
```

### Rozhodování (větvení)

Umožňuje rozhodování na základě podmínky s proměnnou nebo funkcí. Pokud je podmínka pravdivá provede blok kódu. Pokud není, provede blok kódu za else.

```
int cislo = 1;

if (cislo > 1)
{
  // pokud je cislo vetsi nez 1 provede se kod zde
  // ...
}
else
{
  // pokud je cislo neni vetsi nez 1 provede se kod zde
  // ...
}
```

### Konečné opakování (for)

Umožňuje opakovat několikrát opakovat kód v bloku.

```
for(int i = 0; i < 10; i++)
{
  // tento kod se provede 10x
  // ...
}
```

### Neustálé opakování (while)

Umožňuje opakovat kód dokud platí podmínka v závorce.

```
while(teplota < 30)
{
  // tento kod se opakuje dokud je teplota nizsi jak 30 stupnu
}

while(1)
{
  // tento kod se opakuje do nekonecna
}
```

### Return

Ukončuje funkci a vrací hodnotu (nemusí vracet nic).

```
void funkce1()
{
  // nevraci nic
  return;
}

int funkce2()
{
  // vraci 1
  return 1;
}
```

### Arduino

Obsahuje bloky setup a loop do kterých píšeme kód.

```
void setup()
{
  // tento kod se provede pouze jednou hned po spusteni programu
}

void loop()
{
  // tento kod se opakuje ve smycce do nekonecna
}
```

## Návod na ovládání robota

### Spuštění robota

Spustí a nastaví robota, aby ho bylo možné začít používat.

```
probud_se();
```

### Nastavení robota do rovné polohy

Srovná nohy robota do vzpřímené polohy.

```
srovnej_se();
```

### Chůze

Robot se bude pohybovat v daném směru.

```
jdi(pocet_kroku, smer);
```

pocet_kroku je libovolné číslo a smer může být DOPREDU nebo DOZADU.

```
// priklad 1 krok dopredu
jdi(1, DOPREDU);
```

### Zatáčení

Robot se o kousek otočí.

```
zatoc(pocet_kroku, strana);
```

pocet_kroku je libovolné číslo a strana může být PRAVA nebo LEVA.

```
// priklad 4 kroky doleva
zatoc(1, LEVA);
```

### Naklánění

Robot se nakloní na stranu.

```
nahni_se(strana);
```

strana může být PRAVA nebo LEVA.

```
// priklad naklon doleva
nahni_se(LEVA);
```

### Skoč

Robot si lehce poskočí.

```
skoc();
```

### Zatřes nohou

Robot zatřese nohou.

```
zatres_nohou(strana);
```

strana může být PRAVA nebo LEVA.

```
// priklad zatreseni levou nohou
zatres_nohou(LEVA);
```

### Zatřes nohou

Robot zatřese nohou.

```
zatres_nohou(strana);
```

strana může být PRAVA nebo LEVA.

```
// priklad zatreseni levou nohou
zatres_nohou(LEVA);
```

### Získání vzdálenosti

Získá hodnotu vzdálenosti překážky ze senzoru (očí).

```
ziskej_vzdalenost();
```

funkce vrací float (desetinné číslo) vzdálenosti.

```
// priklad ziskani vzdalenosti a nacteni do promenne
float vzdalenost = ziskej_vzdalenost();
```

### Získání stavu baterie

Získá stav baterie.

```
stav_baterie();
```

funkce vrací double (dlouhé desetinné číslo) se stavem baterie.

```
// priklad ziskani stavu baterie a nacteni do promenne
float stav = stav_baterie();
```

### Provedení gesta

Robot provede určité gesto (pohyb a zvuk).

```
udelej_gesto(gesto);
```

gesto začíná na G a může být G_STASTNY, G_VELMI_STASTNY, G_SMUTNY, G_NASTVANY, G_ZKLAMANY, G_ZMATENY, G_ZAMILOVANY, G_VITEZSTVI, G_SPANEK nebo G_PODRAZDENY.

```
// priklad smutneho gesta
udelej_gesto(G_SMUTNY);
```

### Přehrání zvuku

Robot přehraje určitý zvuk.

```
zpivej(zvuk);
```

gesto začíná na Z a může být Z_STASTNY, Z_VELMI_STASTNY, Z_SMUTNY, Z_NASTVANY, Z_PRIPOJENY, Z_ODPOJENY, Z_PREKVAPENY, Z_PRITULNY, Z_OHOOH, Z_SPANEK, Z_ZMATENY, Z_PRD.

```
// priklad zvuku pri pripojeni
zpivej(Z_PRIPOJENY);
```
