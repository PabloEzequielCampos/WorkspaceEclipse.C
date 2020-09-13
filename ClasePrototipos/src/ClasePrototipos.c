/*
 ============================================================================
 Name        : ClasePrototipos.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : tp1_laboratorio
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // utilizar getch()
#include <ctype.h> //  utilizar getchar()

int suma(int num1, int num2); 		//PROTOTIPO DECLARADO.

int main() {
	setbuf(stdout, NULL);

	int valor1, valor2, resultado; 			// 3 VARIABLES DECLARAS JUNTAS

	printf("\n Ingrese primer  numero a sumar \n ");
	scanf("%d", &valor1);

	printf("\n Ingrese segundo numero a sumar \n ");
	scanf("%d", &valor2);

	resultado = suma(valor1,valor2);

	printf("\n El resultado es: %d", resultado);

	return 0;
}

int suma(int num1, int num2)	  // DESARROLLO de la funcion

{
	int total;
	total = num1 + num2;
	return total;
}
