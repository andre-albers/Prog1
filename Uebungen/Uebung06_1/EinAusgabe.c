#include <stdlib.h>
#include <stdio.h>

int eingabezahl() {
	int eingabe = 0;
	scanf("%i", &eingabe);
	return eingabe;
}

int wahlop() {
	int wahl = 0;
	scanf("%i", &wahl);
	return wahl;
}

void ausgabe(float ergebnis, int wahl_op) {
	if (wahl_op == 1) printf("\nDer Quadratwert ist: %6.3f\n**************************\n", ergebnis);
	if (wahl_op == 2) printf("\nDer Reziprokwert ist: %6.8f\n**************************\n", ergebnis);
}