// By: Csík

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n); // Beolvassuk a számot

  // Ha a beolvasott szám 1 akkor külön kezeljük, mert így a legegyszerűbb.
  // Azért 0-t írunk ki, mert a legtöbb program nyelvben 0-val kezdődik az
  // indexelés. Majd kilépünk a programból a "return 0;"-val.
  if (n == 1) {
    printf("0\n");
    return 0;
  }

  // Létrehozunk egy változót n értékével, hogy a bekért változót ne piszkáljuk,
  // és egy i változót amivel az indexelést számoljuk.
  int current = n;
  int i = 0;

  // A "while(1)" egy végtelen ciklus, hiszen az 1 az igazat is jelenti, mint
  // ahogy azt tanultuk.
  while (1) {

    // A ciklus elején végezzük az index növelést, amivel nincs baj hiszen az n
    // = 1 esetet külön kezeltük.
    i++;

    // Az eukledészi algoritmus szerint elvégezzük a kívánt műveleteket az adott
    // feltételek szerint.
    if (current % 2 == 0) {
      current = current / 2;
    } else {
      current = 3 * current + 1;
    }

    // Mikor a current változó értéke egy lett tudjuk, hogy a végére értünk a
    // vizsgálatnak. Kiíratjuk az indexet és a "break" kulcsszóval kilépünk a
    // végtelen ciklusból. A "break" kulcsszóval a ciklus adott pontján kitudunk
    // ugrani a ciklusból és a ciklus utánni kód folytatólagosan lefut.
    if (current == 1) {
      printf("%d\n", i);
      break;
    }
  }

  return 0;
}
