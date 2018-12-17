/*Aufgabe 5_1
a) Entwerfen und implementieren Sie ein Programm zur Berechnung des Wertes für "!n".
Der Wertebereich für "n" soll zwischen 2 und 10 liegen, anderenfalls ist eine Fehlermeldung auszugeben und das
Programm mit der Eingabe für "n" neuzustarten. Falls für "n" der Wert "0" eingegeben wird, ist das Programm abzubrechen.
b) Die Eulerische Zahl "e" kann man mit nachfolgender Reihe näherungsweise ermitteln:
e = 1+1/1! + 1/2! + 1/3! + 1/4! + ... + 1/n!.
Schreiben Sie auch hierfür ein Programm unter Nutzung der Lösung von Punkt a).
Der Wertebereich für "n" ist der Gleiche. Das Programm muss nur einmal durchgeführt werden ("n" muss aber im Wertebereich (Aufgabe a liegen)).
Informieren Sie sich, was die Werte 1! und 2! ergeben. Benutzen Sie die Unterprogrammstrutktur aus "Praktikum 5.*/

#include <stdlib.h>
#include <stdio.h>

void ausgabe(float zahl);
float fakul_berechnung(unsigned int n);
unsigned eingabe(void);

void main() {
	float ergebnis = 0;
	int eingegeben = 0;
	do {
		printf("Fakultaet berechnen\nBitte Zahl zwischen 2-10 eingeben:\n");
		eingegeben = eingabe();
		
		if (eingegeben >= 2 && eingegeben <= 10) {
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

float fakul_berechnung(unsigned int n) {
	float ergebnis = 0, fakult = 1;
	for (int i = 1; i <= n; i++) {
		fakult = fakult * i;
		ergebnis = ergebnis + (1.0 / fakult);
	}
	return ergebnis + 1;
}


void ausgabe(float zahl) {
	printf("Das Ergebnis lautet: %f\n\n", zahl);
}
