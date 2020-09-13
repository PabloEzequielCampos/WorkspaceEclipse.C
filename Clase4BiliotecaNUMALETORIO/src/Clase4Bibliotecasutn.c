/*
 ============================================================================
 Name        : Clase4Bibliotecasutn.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/****************************************************************************
 * Programa :  Ejemplo clase 4
 *
 * Objetivo;
 * 	A - Desarrollar una biblioteca "utn.h" que posea funciones para
 * 	pedirle al usuario el ingreso de estos datos
 *
 * 	-getInt()
 * 	-getFloat()
 * 	-getChar()
 *
 * 	B - Diseñar un programa para jugar a adivinar un numero entre 0 y 100.
 * 	El juego tiene que dar psitas de si el numero introducido por el
 * 	jugador esta por encima o por debajo. El juego termina cuando se
 * 	adivina el numero o se decide terminar de jugar ingresando un numero
 * 	negativo. Permitir jugar tantas veces como lo desee el jugador y al
 * 	salir mostrar su mejor puntacion. Utilizar la bibilioteca del punto 1.
 *
 * Aspectos a destacar:
 *
 * -	Se practica la declara cion de funciones y se muestra como crear una
 * biblioteca propia y utilizarla en un programa.
 *

 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int numeroOculto;
	int numeroIngresado;
	char teclaIngresada;
	int jugar;

	teclaIngresada = 's';

	while (teclaIngresada == 's') {  // INICIA WHILE

		numeroOculto = getNumeroAleatorio(1, 100, 1);
		printf("SHHH EL NUM OCULTO ES : %d\n", numeroOculto);

		jugar = 1;
		while (jugar == 1) {
			numeroIngresado = getInt("Ingrese un numero (0-100 )\n");

			if (numeroIngresado < 0) {
				jugar = 0;
			} else if (numeroIngresado == numeroOculto) {
				printf("Felicitaciones GANASTE!!   \n");
				jugar = 0;

			} else if (numeroIngresado > numeroOculto) {
				printf("EL NUMERO QUE INGRESASTE ES GRANDE!! \n");

			} else if (numeroIngresado < numeroOculto) {
				printf("El NUMERO QUE INGRESASTE ES CHICO!!! \n");
			}

		}

		teclaIngresada = getChar("Desea Jugar Nuevamente? (s/n) \n ");

	}  // FINALIZA WHILE

	return 0;
}
