/*Uebung 06
Schreiben Sie ein Programm, das für eine vorher eingegebene Zahl entweder die Berechnung ihres Quadratwertes oder
die Berechnung ihres Reziprokwertes ermöglicht.
Hierzu sind folgende Funktionen zu implementieren:
- eine erste Eingabefunktion zur Eingabe der Zahl
- eine zweite Eingabefunktion zur Eingabe der gewünschten Operation
- zwei Rechenfunktionen zur Berechnung des Ergebnisse für die jeweilige Operation
- eine Ausgabefunktion zur Anzeige des jeweiligen Ergebnisses (auf übersichtliche Ausgabe achten)
Hinweis:
- Es dürfen keine globalen Variablen benutzt werden.
- Verwenden Sie bei der Parameterübergabe "call by value"*/

#include <stdlib.h>
#include <stdio.h>

int eingabezahl();
int wahlop();
int quad_berechnung(int eingezahl);
float rezi_berechnung(float eingezahl);
void ausgabe(float ergebnis, int wahl_op);

void main() {
	int eingezahl, wahl_op, erg_quad;
	float erg_rez = 1;
	do {
		printf("Bitte eine Zahl eingeben:\n");
		eingezahl = eingabezahl();
		printf("Bitte nun Operation waehlen:\n 1-Quadratwert berechnen | 2-Reziprokwert berechnen || 0-Beenden\n");
		wahl_op = wahlop();
		if (wahl_op == 1) {
			erg_quad = quad_berechnung(eingezahl);
			ausgabe(erg_quad, wahl_op);
		}
		else if (wahl_op == 2) {
			erg_rez = rezi_berechnung(eingezahl);
			ausgabe(erg_rez, wahl_op);
		}
		else if (wahl_op == 0) return 0;
		else ("Eingebene Zahl war nicht 1 oder 2!");

	} while (eingezahl != 0);
	return 0;
}

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

int quad_berechnung(int eingezahl) {
	int erg_quad;
	erg_quad = eingezahl * eingezahl;
	return erg_quad;
}

float rezi_berechnung(float eingezahl) {
	float erg_rezi;
	erg_rezi = 1.0 / eingezahl;
	return erg_rezi;
}

void ausgabe(float ergebnis, int wahl_op) {
	if (wahl_op == 1) printf("\nDer Quadratwert ist: %6.3f\n**************************\n", ergebnis);
	if (wahl_op == 2) printf("\nDer Reziprokwert ist: %6.8f\n**************************\n", ergebnis);
}

