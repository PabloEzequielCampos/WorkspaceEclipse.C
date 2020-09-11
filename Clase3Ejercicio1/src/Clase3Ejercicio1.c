/*
 ============================================================================
 Name        : Clase3Ejercicio1.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : Clase 3 EJ 1
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 EJERCICIO 1 CLASE 3

 Crear una funcion que permita ingresar un numero al usuario, lo retorne y lo muestre

 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int ingresar(int num1); // prototipo

int main() {
	setbuf(stdout, NULL);
	int numero1;
	int resTotal;

	printf("\n Ingrese un numero");
	scanf("%d", &numero1);

	resTotal = ingresar(numero1);

	printf("\n El numero ingresado fue : %d", resTotal);

	return 0;
}

int ingresar(int num1) // desarrollo
{
	int resultado;

	resultado = num1;

	return resultado;

}
