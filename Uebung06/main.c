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
float quad_berechnung(float eingezahl);
float rezi_berechnung(float eingezahl);
void ausgabe(float ergebnis);

void main() {
	int eingezahl, wahl_op;
	do {
		printf("Bitte eine Zahl eingeben:\n");
		eingezahl = eingabezahl();
		printf("\nBitte nun Operation waehlen:\n 1 - Quadratwert berechnen | 2 - Reziprokwert berechnen || 0 zum Beenden");
		wahl_op = wahlop();
		if (wahl_op == 1) quad_berechnung(eingezahl);
		else if (wahl_op == 2) rezi_berechnung(eingezahl);
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

float quad_berechnung(float eingezahl) {

}

float rezi_berechnung(float eingezahl) {

}

void ausgabe(float ergebnis) {

}


