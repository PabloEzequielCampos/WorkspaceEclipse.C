/*
 * utn.c
 *
 *  Created on: 13 sept. 2020
 *      Author: Pablo y Lulu
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *\brief Solicita un numero al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El numero ingresado por el usuario
 *
 */
float getFloat(char mensaje[]) {
	float auxiliar;
	printf("%s", mensaje);
	scanf("%f", &auxiliar);
	return auxiliar;
}
/**
 *\brief Solicita un numero al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El numero ingresado por el usuario
 *
 */
int getInt(char mensaje[]) {
	int auxiliar;
	printf("%s", mensaje);
	scanf("%d", &auxiliar);
	return auxiliar;
}
/**
 *\brief Solicita un caracter al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[]) {
	char auxiliar;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%c", &auxiliar);
	return auxiliar;
}
/**
 *\brief Solicita un numero al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El numero ingresado por el usuario
 *
 */
char getNumeroAleatorio(int desde, int hasta, int iniciar) {
	if (iniciar) {
		srand(time(NULL));
	}
	return desde + (rand() % (hasta + 1 - desde));
}
/**
 *\brief De dos valores int, entrega un resultado
 *\param realiza una SUMA
 *\return entrega el resultado de "total"
 *
 */
int sum(int value1, int value2) { //suma
	int total;
	total = value1 + value2;

	return total;

} // fin de suma

/**
 *\brief De dos valores int, entrega un resultado
 *\param realiza una resta
 *\return entrega el resultado de "total"
 *
 */
int subtraction(int value1, int value2) { //resta
	int total;
	total = value1 - value2;

	return total;

} //fin de resta

/**
 *\brief De dos valores int, entrega un resultado
 *\param realiza una division
 *\return entrega el resultado de "total"
 *
 */
float divide(int value1, int value2) { // division

	return (float) value1 / value2;

} // fin division

/**
 *\brief De dos valores int, entrega un resultado
 *\param realiza una multiplicacion
 *\return entrega el resultado de "total"
 *
 */
int multiply(int value1, int value2) { // multiplicacion

	int total;

	total = value1 * value2;

	return total;

} // fin de multiplicacion

/**
 *\brief De solo 1 valor entrega el factorial
 *\param realiza una factorial
 *\return entrega el resultado de "total"
 *
 */
int factorialValue1(int value1) {  // Factorial
	int total1;
	if (value1 <= 1) {
		total1 = 1;
	} else {
		total1 = value1 * (factorialValue1(value1 - 1));
	}
	return total1;
}  // fin factorial numero 1

/**
 *\brief De solo 1 valor entrega el factorial
 *\param realiza una factorial
 *\return entrega el resultado de "total2" (factorial numero 2)
 *
 */
int factorialValue2(int value2) {  // Factorial
	int total2;
	if (value2 <= 1) {
		total2 = 1;
	} else {
		total2 = value2 * (factorialValue1(value2 - 1));
	}
	return total2;
}  // fin factorial num 2

/**
 *\brief  Pido un valor lo guardo en bufferint y compruebo que no sea NULL
 *\param  Realizo la validacion de numero entero y lo muestro
 *\return Entrego el resultado siempre y cuando retorno pase a 0.
 *
 */
int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError,int minimo, int maximo, int reintentos) {

	int bufferInt;
	int retorno = -1;

	do {

		if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
				&& minimo <= maximo && reintentos >= 0) {

			printf("%s", mensaje);
			scanf("%d", &bufferInt);
		}
		if (bufferInt >= minimo && bufferInt <= maximo) {
			*pResultado = bufferInt;
			retorno = 0;
			break;
		} else {
			printf("%s", mensajeError);
			reintentos--;
		}
	} while (reintentos >= 0);

	return retorno;

} // FIN GET NUMERO

/**
 *\brief  Pido un valor char lo guardo en BufferChar y compruebo que no sea NULL
 *\param  Realizo la validacion de CARACTER
 *\return Entrego el resultado siempre y cuando retorno pase a 0.
 *
 */

int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError,char minimo, char maximo, int reintentos) {

	char bufferChar;
	int retorno = -1;

	do {

		if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
				&& minimo <= maximo && reintentos >= 0) {

			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);
		}
		if (bufferChar >= minimo && bufferChar <= maximo) {
			*pResultado = bufferChar;
			retorno = 0;
			break;
		} else {
			printf("%s", mensajeError);
			reintentos--;
		}
	} while (reintentos >= 0);

	return retorno;

} // FIN GET CHAR

/**
 *\brief  Pido un valor char lo guardo en BufferChar y compruebo que no sea NULL
 *\param  Realizo la validacion de CARACTER
 *\return Entrego el resultado siempre y cuando retorno pase a 0.
 *
 */

int utn_getNumeroFlotante(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
{
	float bufferFloat;
	int retorno = -1;

	do {

		if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
				&& minimo <= maximo && reintentos >= 0) {

			printf("%s", mensaje);
			scanf("%f", &bufferFloat);
		}
		if (bufferFloat >= minimo && bufferFloat <= maximo) {
			*pResultado = bufferFloat;
			retorno = 0;
			break;
		} else {
			printf("%s", mensajeError);
			reintentos--;
		}
	} while (reintentos >= 0);

	return retorno;

} // FIN GET FLOAT


