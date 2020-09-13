/*
 ============================================================================
 Name        : CrearBiblioteca.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : clase crear biblioteca
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout,NULL);
	float resultado=11111111;
	int numero1;
	int numero2;
	int respuesta;

	printf("\n Numero1?:  "); // pido numero 1
	scanf("%d", &numero1);
	printf("\n Numero2?:  "); // pido numero 2
	scanf("%d", &numero2);

	respuesta = dividir(&resultado, numero1, numero2);
	if (respuesta == 0) {

		printf("El resultado es %f \n", resultado);
	} else {
		printf("No se puede dividir por cero \n");
	}

	return 0;
}


