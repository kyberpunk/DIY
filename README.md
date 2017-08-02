# Otto DIY

Repozitář obsahuje fork open-source projektu Otto DIY (https://github.com/OttoDIY). Tato verze knihovně přepsanou do českého jazyka pro aktivity pro příměstský dětský tábor.

Ve složce OTTO_bea najdete ukázkový soubor OTTO_bea.ino, který slouží jako šablona pro programování robota.

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

Robot se nakloní nastranu.

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
