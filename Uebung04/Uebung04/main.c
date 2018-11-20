/*Aufgabe 4
Eine Zahl ist durch drei teilbar, wenn die Quersumme der einzelnen Ziffern durch drei teilbar ist.
Entwickeln Sie zur Umsetzung dieses Sachverhaltes ein strukturiertes und gut kommentiertes Programm mit folgenden Eckpunkten:
1. Geben Sie eine beliebige (ganze, vorzeichenlose) Zahl als "String" ein.
2. Ermitteln Sie programmtechnisch, ob die Zahl durch drei teilbar ist, indem Sie die Quersumme bilden. Geben Sie zunächst
das Ergebnis der Quersummendivision aus.
3. Brechen Sie das Programm ab, sofern die Ziffer 0 eingegebn wird, andernfalls ermöglichen Sie weitere Berechnungen.*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main() {
	do {
		int quersumme = 0, i = 0, rest = 0;
		unsigned char eingabe[MAX];

		printf("Ist die Zahl durch drei teilbar? 0 zum Beenden\nZahl eingeben: ");
		scanf("%s", eingabe);

		for (i = 0; i < MAX && eingabe[i]; i++) {
			quersumme = quersumme + ((int)eingabe[i]) - 48;
		}

		if (quersumme == 0) return 0;

		rest = quersumme % 3;
		printf("Die Quersumme von %s ist %d.", eingabe, quersumme);

		if (rest == 0) {
			printf("\nDie Zahl ist somit durch drei teilbar.\n\n");
		}
		else {
			printf("\nDie Zahl ist somit nicht durch drei teilbar.\n\n");
		}

	} while (1);
}
