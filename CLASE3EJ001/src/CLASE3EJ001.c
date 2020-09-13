/*
 ============================================================================
 Name        : CLASE3EJ001.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Crear una función que permita ingresar un numero al usuario y lo retorne.
 * Crear una función que reciba el radio de un círculo y retorne su área.
 * Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule-
 * -el área de un círculo cuyo radio es ingresado por el usuario.
 * Documentar las funciones al estilo Doxygen.
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int getNumber(int value1);

int circle(float area);

int main() {
	setbuf(stdout, NULL);
	int number;
	int returnNumber;
	int radio;
	int returnCircle;


	printf("\n Ingrese un numero ");
	scanf("%d", &number);
	system("pause");

	printf("\n Ingrese el radio y brindare el area ");
	scanf("%d",&radio);

	returnNumber = getNumber(number);
	returnCircle = circle(number);

	printf("\n El numero retornado es: %d \n", returnNumber);

	system("pause");

	printf("\n El area de su radio es: %d ", returnCircle);


	return 0;

}
int getNumber(int value1) {
	int total;

	total = value1;

	return total;
}

int circle(float area){

	int total;

	total =  PI * area *area;

	return total;

}

