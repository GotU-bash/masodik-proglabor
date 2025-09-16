/*
By: Csík

Fontos hogy használd a math.h könyvtárat, mert a Moodle csak az efféle
megoldásokat fogadja el.

WINDOWS RÉSZ:
Nem kell linkelni semmit csupán: gcc main.c -o main.exe
A "-o" az outputot rövidíti.
Ha odarakjátok a -lm flaget az -o elé az ilyen good practice, bár elméletileg 
mingw-nál semmit nem csinál.


LINUXOS RÉSZ: (ha windowson vagy hagyd ki)
A math.h nem része a C standard könyvtárának linuxon ezért a kód futtatásakor
"linkelni" kell a fordítónak az alábbi módon: gcc main.c -lm -o main Ebből a
"-lm" linkeli a math.h könyvtárat. (l = link, m = math) A "-o" az outputot
rövidíti. Tehát: gcc main.c -lm -o main

A fordításkor a main.c helyére a ti fájlotok nevét írjátok!!

*/

#include <math.h>
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n); // Beolvassuk a számot

  int r = (int)sqrt(n);
  // Az "(int)" kifejezés a négyzetgyök függvény előtt
  // "castolja" annak eredményét (visszatérési értékét).
  // Tehát amikor elvégzi a program ezt a sort akkor az r
  // változó a négyzetgyök egészrészét fogja felvenni,
  // mert az int egy egész típus és azzá castoljuk. (ha n nem
  // négyzetszám akkor tört lesz a végeredmény de a
  // castolással letudjuk vágni a tizedespont utánni részt)

  // Megnézzük, hogy az r változó négyzete egyenlő-e n-el és
  // ez alapján írunk ki.
  if (r * r == n) {
    printf("Negyzetszam\n");
  } else {
    printf("Nem negyzetszam\n");
  }

  return 0;
}
