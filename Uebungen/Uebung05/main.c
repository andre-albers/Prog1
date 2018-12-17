/*Aufgabe 5
Entwerden und implementieren Sie ein Programm zur Berechnung des Wertes für "n!".
Der Wertebereich für "n" soll zwischen 2 und 10 liegen, anderenfalls ist eine Fehlermeldung auszugeben und
 das Programm mit der Eingabe neu zu starten.
Falls für "n" der Wert "0" eingegeben wird, ist das Programm abzubrechen.
Schreiben Sie dieses Programm nun unter Verwendung von Unterprogrammen und beachten Sie unbedingt folgene Programmstruktur:

1. Ein erstes Unterprogramm (wird vom Hauptprogramm aufgerufen), das die Eingabe der zur berechnenden Zahl ermöglicht.
Die Signatur (Prototyp) dieses Unterprogramms ist "unsigned eingabe (void)".
Die eingebene Zahl wird anschließend im Hauptprogramm ausgewertet.
Ermöglichen Sie dort entweder eine Neueingabe der Zahl (über das erste Unterprogramm),
einen Programmabbruch oder die Berechnung der Fakultät (zweites Unterprogramm).

2. Ein zweites Unterprogramm ermöglicht die Berechnung der Fakultät.
Es wird ebenfalls vom Hauptprogramm aufgerufen und hat die Signatur (Prototyp) "unsigned fakul_berechnung (unsigned)".
Das Ergebnis der Berechnung wird erneut an das Hauptprogramm zurückgegeben.

3. Ein drittes Unterprogramm, das wiederum vom Hauptprogramm aufgerufen wird, gibt das Ergebnis der Berechnung der Fakultät aus.
Es hat die Signatur "void ausgabe(unsigned)".

Hinweise: - Die Fehlerbehandlung einer falschen Eingabe erfolgt im Hauptprogramm.
		  - Es dürfen keine globalen Variablen verwendet werden.
		  - Es ist sich unbedingt an die vorgebenen Signaturen zu halten.*/

#include <stdlib.h>
#include <stdio.h>

void ausgabe(unsigned int zahl);
unsigned fakul_berechnung(unsigned int n);
unsigned eingabe(void);

void main() {
	int ergebnis = 0, eingegeben = 0;
	do {
		printf("Fakultaet berechnen\nBitte Zahl zwischen 2-10 eingeben:\n");
		eingegeben = eingabe();
		if (eingegeben == 0) return 0;
		else if (eingegeben >= 2 && eingegeben <= 10) {
			ergebnis = fakul_berechnung(eingegeben);
			ausgabe(ergebnis);
		}
		else {
			printf("Eingebene Zahl war nicht zwischen 2 - 10!\n\n");
		}
	} while (eingegeben != 0);
}

unsigned eingabe(void) {
	int eingabe = 0;
	scanf("%d", &eingabe);
	return eingabe;
}

unsigned fakul_berechnung(unsigned int n) {
	int ergebnis = 1;
	for (int i = 1; i <= n; i++) {
		ergebnis = ergebnis * i;
	}
	return ergebnis;
}


void ausgabe(unsigned int zahl) {
	printf("Das Ergebnis lautet: %d\n\n", zahl);
}
