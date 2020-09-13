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

