// By: Csík

#include <stdio.h>

// Ezt a feladatot külső függvények nélkül is meglehet oldani.

/*

EXTRA ANNAK AKIT ÉRDEKEL

Ez egy rekurzív megoldás, egy függvény ami önmagát hívja meg.

int lgko_rekurziv(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return lgko_rekurziv(b, a % b);
  }
}

Ez egy iteratív megoldás. Nem olyan farokméregetős, mint a rekurzív, de jó
megoldást ad.

int lgko(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
*/

// NÉZD MEG A LINKELT YOUTUBE VIDEÓT HOGY JOBBAN ÉRTSD
int main(void) {

  // Bekérjük a két számot
  int a, b;
  scanf("%d %d", &a, &b);

  // Az egyszerűség kedvéért, biztosra megyünk, hogy a két szám közül a nagyobb
  // érték az a-ban és a kisebb a b-ben legyen.
  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  // A ciklusunk addig megy amíg b nem egyenlő 0-val. (!=) Először egy
  // változóban eltároljuk b értékét, majd b felveszi az a és b osztás
  // maradékát, végül a felveszi b kezdeti értékét.
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  // A végére az a változóban vár minket a két szám legnagyobb közös osztója
  // ezért azt kiíratjuk.
  printf("%d\n", a);

  return 0;
}