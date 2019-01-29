//y = a² * b² - c
//y == 0 -> return 0
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int eingabe();
int berechnung(int a, int b, int c);
void ausgabe(int ergebnis);

int main() {
	while (1) {
		int a, b, c, berech = 0;
		printf("Variable a eingeben:\n");
		a = eingabe();
		printf("Variable b eingeben:\n");
		b = eingabe();
		printf("Variable c eingeben:\n");
		c = eingabe();
		berech = berechnung(a, b, c);
		if (berech == 0) return 0;
		ausgabe(berech);
	}
}

int eingabe() {
	int zahl = 0;
	scanf("%d", &zahl);
	return zahl;
}

int berechnung(int a, int b, int c) {
	int ergebnis;
	ergebnis = ((a*a) * (b*b)) - c;
	return ergebnis;
}

void ausgabe(int ergebnis) {
	printf("Das Ergebnis ist: %d\n\n", ergebnis);
}
