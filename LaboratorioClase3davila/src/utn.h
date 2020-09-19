/*
 * utn.h
 *
 *  Created on: 13 sept. 2020
 *      Author: Pablo y Lulu
 */

#ifndef UTN_H_
#define UTN_H_


int getInt(char mensaje[]); // obtener entero, recibir parametro cadena de caracteres.

float getFloat(char mensaje []); // flotante " " " " " "

char getChar(char mensaje []); // caracter. " " " " " "

char getNumeroAleatorio(int desde, int hasta, int iniciar);

int sum(int value1, int value2); // suma

int subtraction(int value1, int value2); // resta

float divide(int value1, int value2); // division

int multiply(int value1, int value2); // multiplicacion

int factorialValue1(int value1);  // Factorial 1

int factorialValue2(int value2);  // Factorial 2


int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumeroFlotante(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);
int utn_getCaracter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos);

#endif /* UTN_H_ */
