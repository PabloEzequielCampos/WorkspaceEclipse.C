/*
 ============================================================================
 Name        : LaboratorioClase3davila.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int edad;
	int peso;
	int respuesta;
	char letra;
	float numeroFloat;

	respuesta = utn_getCaracter(&letra, "\n letra? \n ","Error la letra debe ser de A a J\n", 'A', 'J', 3); // GET CHAR
	if (respuesta == 0) {
		printf("\n La letra es: %c \n ", letra);
	} else {
		printf("\n Error \n ");

	}//FIN GET CHAR

	respuesta = utn_getNumero(&edad, "\n Edad? \n ","Error la edad debe ser de 0 a 199\n", 0, 199, 2);// GET NUMERO
	if (respuesta == 0) {
		printf("\n La edad es: %d \n ", edad);
	} else {
		printf("\n Error \n ");

	} // FIN GET NUMERO

	respuesta = utn_getNumero(&peso, "\n peso? \n ","Error el peso ser de 0 a 500\n", 0, 500, 3); // GET NUMERO EN (PESO)
	if (respuesta == 0) {
		printf("\n el peso es: %d \n ", peso);
	} else {
		printf("\n Error \n ");

	}// FIN GET NUMERO (PESO)

	respuesta = utn_getNumeroFlotante(&numeroFloat, "\n Flotante? \n ","Error El flotante ser de 0 a 500 \n", 0, 500, 2); // GET FLOAT
		if (respuesta == 0) {
			printf("\n El flotante es: %.2f \n ", numeroFloat);
		} else {
			printf("\n Error \n ");

		} // FIN GET FLOAT.

	return 0;

}
