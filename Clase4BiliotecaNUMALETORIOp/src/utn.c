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
float getFloat(char mensaje[]){
	float auxiliar;
	printf("%s",mensaje);
	scanf("%f",&auxiliar);
	return auxiliar;
}
/**
 *\brief Solicita un numero al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El numero ingresado por el usuario
 *
 */
int getInt(char mensaje[]){
	int auxiliar;
	printf("%s",mensaje);
	scanf("%d",&auxiliar);
	return auxiliar;
}
/**
 *\brief Solicita un caracter al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje []){
		char auxiliar;
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%c",&auxiliar);
		return auxiliar;
}
/**
 *\brief Solicita un numero al usuario y devuelve el resultado
 *\param mensaje Es el Mensaje a ser mostrado
 *\return El numero ingresado por el usuario
 *
 */
char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
	if (iniciar){
		srand (time(NULL));
	}
	return desde + (rand()% (hasta +1 - desde));
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
