/*
 ============================================================================
 Name        : CLASE3.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : Clase 3 EJ 2
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


#define PI  3.14  	//DEFINIR PI


float circulo(float area); // Prototipo


int main() {
	setbuf(stdout, NULL);

	float resultado;
	float radio;


	printf("Ingrese el radio de su circulo");
	scanf("%f", &radio);

	resultado = circulo(radio);

	printf("\n El area de su circulo es: %f", resultado);

	return 0;
}

float circulo(float area)
{
	float total;
	total = 2 * PI * area;

return total;
}
