#include <stdlib.h>
#include <stdio.h>
#include "Rechnen.h"

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