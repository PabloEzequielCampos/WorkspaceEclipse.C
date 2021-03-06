/*
 ============================================================================
 Name        : EjercicioPracticaHospital.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char inicial;
	int temperatura;
	int edad;
	char sexo;
	int contadorSexoM;
	int contadorSexoF;
	float promedio;
	int sumaEdad;
	int cantidadEdades;
	int mayorTemperaturaF;
	char mayorInicial;
	int flagF;

	flagF = 0;
	cantidadEdades = 0;
	contadorSexoF = 0;
	contadorSexoM = 0;

	printf("\n 		     	 Ejercicio de repaso\n");
	printf(" 			======================\n");
	printf(
			"\n De 5  personas que ingresan al hospital se deben tomar y validar los siguientes datos.\n");

	printf(" \n 		La inicial , Temperatura, Sexo y Edad.		\n ");
	printf(
			" \n |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf(" \n A) Informar la cantidad de personas de cada sexo. \n ");
	printf(" \n B) La edad promedio en total. \n ");
	printf(" \n C) La mujer con m�s temperatura (si la hay ) \n");
	printf(" \n		 Pedir datos y mostrar los resultados 		\n ");
	printf(
			"\n ================================================================= \n \n \n");

	for (int i = 0; i < 2; i++) {

		do {
			printf("Ingrese su inicial \n");
			fflush(stdin);
			scanf("%c", &inicial);
		} while (inicial < 'a');

		do {
			printf("Ingrese su temperatura \n");
			scanf("%d", &temperatura);
		} while (temperatura <= 30);

		do {
			printf("Ingrese su sexo: f/m \n");
			fflush(stdin);
			scanf("%c", &sexo);

			if (sexo == 'f') {
				contadorSexoF++;
			} else if (sexo == 'm') {
				contadorSexoM++;
			}
		} while (sexo == 'f' && sexo == 'm');

		do {
			printf("Ingrese su edad \n");
			scanf("%d", &edad);
			cantidadEdades++;
			sumaEdad = (float)sumaEdad + edad;

		} while (edad <= 0);

		if (flagF == 0 || temperatura > mayorTemperaturaF) {
			mayorTemperaturaF = temperatura;
			mayorInicial = inicial;
			flagF = 1;
		}

	} // FIN DEL FOR

	promedio = sumaEdad / cantidadEdades;

	printf("\n La cantidad de hombres es : %d y la de mujeres es : %d",
			contadorSexoM, contadorSexoF);
	printf("\n La edad promedio en total es %.2f", promedio);
	printf("\n La mujer con mas temperatura es %c", mayorInicial);

	return 0;
}
