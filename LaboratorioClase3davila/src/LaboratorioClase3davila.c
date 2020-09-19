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

	respuesta = utn_getCaracter(&letra, "\n letra? \n ","Error la letra debe ser de A a J\n", 'A','J', 3);
	if (respuesta == 0) {
		printf("\n La letra es: %c \n ", letra);
	} else {
		printf("\n Error\n ");
	}

	respuesta = utn_getNumero(&edad, "Edad? \n ","Error la edad debe ser de 0 a 199\n", 0, 199, 2);
	if (respuesta == 0) {
		printf("\n La edad es: %d \n ", edad);
	} else {
		printf("\n Error\n ");
	}
	respuesta = utn_getNumero(&peso, "\n peso? \n ","Error el peso ser de 0 a 500\n", 0, 500, 3);
	if (respuesta == 0) {
		printf("\n el peso es: %d\n ", peso);
	} else {
		printf("\n Error\n ");
	}

	return 0;

}
