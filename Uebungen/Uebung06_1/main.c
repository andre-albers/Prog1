/*Uebung 06
Schreiben Sie ein Programm, das f�r eine vorher eingegebene Zahl entweder die Berechnung ihres Quadratwertes oder
die Berechnung ihres Reziprokwertes erm�glicht.
Hierzu sind folgende Funktionen zu implementieren:
- eine erste Eingabefunktion zur Eingabe der Zahl
- eine zweite Eingabefunktion zur Eingabe der gew�nschten Operation
- zwei Rechenfunktionen zur Berechnung des Ergebnisse f�r die jeweilige Operation
- eine Ausgabefunktion zur Anzeige des jeweiligen Ergebnisses (auf �bersichtliche Ausgabe achten)
Hinweis:
- Es d�rfen keine globalen Variablen benutzt werden.
- Verwenden Sie bei der Parameter�bergabe "call by value"*/

#include <stdlib.h>
#include <stdio.h>
#include "EinAusgabe.h"
#include "Rechnen.h"

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
		else if (wahl_op == 0)
			return 0;
		else 
			("Eingebene Zahl war nicht 1 oder 2!");

	} while (eingezahl != 0);
	
	return 0;
}