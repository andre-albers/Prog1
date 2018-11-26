/*Aufgabe 5
Entwerden und implementieren Sie ein Programm zur Berechnung des Wertes f�r "n!".
Der Wertebereich f�r "n" soll zwischen 2 und 10 liegen, anderenfalls ist eine Fehlermeldung auszugeben und
 das Programm mit der Eingabe neu zu starten.
Falls f�r "n" der Wert "0" eingegeben wird, ist das Programm abzubrechen.
Schreiben Sie dieses Programm nun unter Verwendung von Unterprogrammen und beachten Sie unbedingt folgene Programmstruktur:

1. Ein erstes Unterprogramm (wird vom Hauptprogramm aufgerufen), das die Eingabe der zur berechnenden Zahl erm�glicht.
Die Signatur (Prototyp) dieses Unterprogramms ist "unsigned eingabe (void)".
Die eingebene Zahl wird anschlie�end im Hauptprogramm ausgewertet.
Erm�glichen Sie dort entweder eine Neueingabe der Zahl (�ber das erste Unterprogramm),
einen Programmabbruch oder die Berechnung der Fakult�t (zweites Unterprogramm).

2. Ein zweites Unterprogramm erm�glicht die Berechnung der Fakult�t.
Es wird ebenfalls vom Hauptprogramm aufgerufen und hat die Signatur (Prototyp) "unsigned fakul_berechnung (unsigned)".
Das Ergebnis der Berechnung wird erneut an das Hauptprogramm zur�ckgegeben.

3. Ein drittes Unterprogramm, das wiederum vom Hauptprogramm aufgerufen wird, gibt das Ergebnis der Berechnung der Fakult�t aus.
Es hat die Signatur "void ausgabe(unsigned)".

Hinweise: - Die Fehlerbehandlung einer falschen Eingabe erfolgt im Hauptprogramm.
		  - Es d�rfen keine globalen Variablen verwendet werden.
		  - Es ist sich unbedingt an die vorgebenen Signaturen zu halten.*/

#include <stdlib.h>
#include <stdio.h>

void ausgabe(unsigned int zahl);
unsigned fakul_berechnung(unsigned int n);
unsigned eingabe(void);

void main() {
	printf("Fakultaet berechnen\nBitte Zahl zwischen 2-10 eingeben:\n");
	eingabe();
}

unsigned eingabe(void) {
	int eingabe = 0;
	scanf("%d", &eingabe);
	if (eingabe == 0) return;
	fakul_berechnung(eingabe);
}

unsigned fakul_berechnung(unsigned int n) {
	if (n >= 2 && n <= 10) {
		int ergebnis = 1;
		for (int i = 1; i <= n; i++) {
			ergebnis = ergebnis * i;
		}
		ausgabe(ergebnis);
	}
	else {
		printf("Zahl war nicht zwischen 2-10!\n");
		printf(eingabe());
	}
}

void ausgabe(unsigned int zahl) {
	printf("Das Ergebnis lautet: %d\n\n", zahl);
	main();
}