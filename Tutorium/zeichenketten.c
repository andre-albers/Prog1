#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//Variablen für Aufgabe 1: 
	char ein_char_array[] = "abcdefghijklmnopqrstuvwxyz"; //Hier werden die Zeichen ins Array gespeichert.
	int i = 0;

	//Variablen für Aufgabe 2: 
	char wort[100];
	int anzahl_buchstaben = 0;

	//Variablen für Aufgabe 3:
	char satz[100];
	int anzahl_e = 0;
	int j = 0;

	//Vairablen für Aufgabe 4 (und Aufgabe 5 (ZUSATZ)):
	char beispiel_text[] = "Hallo, dies ist eine Programmier-Uebung. Wir haben das Jahr 2018.";
	char zeichen;
	int position = 0;



	//+++++++++++++++++++++++++++++++++++++++++++ AUFGABE 1: +++++++++++++++++++++++++++++++++++++++++++

	printf("\nAUFGABE 1:\n");
	printf("Das Alphabet hat 26 Zeichen: Hier die ASCII-Tabelle dazu\n");

	for (i = 0; i < 26; i++)
	{
		printf("Zeichen Nummer %2i: %c - %3i \n", i + 1, ein_char_array[i], ein_char_array[i]);
	}
	//Was ist besonders interessant an dieser Ausgabe? Hinweis: Es geht um das letzte Element des Arrays! Ausprobieren!



	//+++++++++++++++++++++++++++++++++++++++++++ AUFGABE 2: +++++++++++++++++++++++++++++++++++++++++++

	printf("\nAUFGABE 2:\n");
	printf("Geben Sie nun Ihr Lieblingswort ein: ");
	scanf("%s", &wort);

	/*Nutzen Sie Ihre Erkenntnisse aus Aufgabe 1, um mittels einer Schleife die Anzahl der Buchstaben aus dem Wort-Array zu ermitteln.
	Speichern Sie den Wert in anzahl_buchstaben rein.*/

	//IHR CODE ANFANG
	for (anzahl_buchstaben = 0; wort[anzahl_buchstaben] != '\0'; anzahl_buchstaben++);

	//IHR CODE ENDE

	printf("Ihr Lieblingswort hat %i Buchstaben.\n", anzahl_buchstaben);



	//+++++++++++++++++++++++++++++++++++++++++++ AUFGABE 3: +++++++++++++++++++++++++++++++++++++++++++

	printf("\nAUFGABE 3:\n");
	printf("Geben Sie nun einen Satz ein: ");
	while (getchar() != '\n');	//'\n' von vorheriger Eingabe/scanf aus Tastaturpuffer entfernen
	fgets(satz, 100, stdin);	//hier fgets statt scanf verwenden, da scanf lediglich bis zum ersten Leerzeichen einliest!

	/*Nutzen Sie Ihre Erkenntnisse aus Aufgabe 2, um die Anzahl von den Buchstaben E zu ermitteln. Speichern Sie den Wert in anzahl_e.
	Es sollen die kleinen und großen E-Buchstaben berücksichtigt werden.*/

	//IHR CODE ANFANG
	for (j = 0; satz[j] != '\0'; j++) {
		if (satz[j] == 'e' || satz[j] == 'E') anzahl_e++;
	}

	//IHR CODE ENDE

	printf("Es existieren %i E-Buchstaben.\n", anzahl_e);



	//+++++++++++++++++++++++++++++++++++++++++++ AUFGABE 4: +++++++++++++++++++++++++++++++++++++++++++

	printf("\nAUFGABE 4:\n");
	printf("Beispiel-Text: %s\n", beispiel_text);
	printf("Geben Sie ein Zeichen ein, das Sie im Beispiel-Text finden moechten: ");
	scanf("%c", &zeichen);

	/*Nach Eingabe eines beliebigen Zeichens sollen alle Positionen des Zeichens im String beispiel_text ermittelt und ausgegeben werden.
	BEISPIEL:
	Zeichen: o
	Position 5
	Position 24
	*/

	//IHR CODE ANFANG
	for (position = 0; beispiel_text[position] != '\0'; position++) {
		if (beispiel_text[position] == zeichen) printf("Position %i \n", position + 1);
	}

	//IHR CODE ENDE


	//++++++++++++++++++++++++++++++++++++++ AUFGABE 5 (ZUSATZ): +++++++++++++++++++++++++++++++++++++++

	printf("\nAUFGABE 5 (ZUSATZ):\n");
	/*Sorgen Sie mithilfe einer Schleife dafür, dass alle Großbuchstaben des Beispiel-Textes in Kleinbuchstaben umgewandelt werden und umgekehrt.
	Der neue Text soll ebenfalls im String beispiel_text gespeichert werden. Nehmen Sie sich für diese Aufgabe die ASCII-Tabelle zur Hilfe.
	Die komplette ASCII-Tabelle finden Sie z.B. unter folgendem Link: http://www.virtualuniversity.ch/software/ascii/ascii-table.GIF */

	//IHR CODE ANFANG


	//IHR CODE ENDE

	printf("Beispiel-Text (nach Umwandlung): %s\n", beispiel_text);

	
	system("PAUSE");
	return 0;
}