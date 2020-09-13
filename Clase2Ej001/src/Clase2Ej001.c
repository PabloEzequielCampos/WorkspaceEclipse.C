/*
 ============================================================================
 Name        : Clase2Ej001.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int number;
	int maxNumber;
	int minNumber;
	int numberCounter;
	int flagNumber;
	int sumNumber;
	float averageNumber;
	flagNumber =0;
	numberCounter = 0;

	for (int i = 0; i < 5; i ++){ // comienzo de for

		printf("Ingrese numero");
		scanf("%d",&number);
		numberCounter++;


		if (flagNumber == 0){
			minNumber = number;
			maxNumber = number;
			flagNumber = 1;
		}

		if (number > maxNumber){
			maxNumber = number;

		}



	}// fin de for

	sumNumber = maxNumber + minNumber;
	averageNumber = (float)sumNumber / numberCounter;

	printf("\n El minimo numero ingresado fue: %d", minNumber);
	printf("\n El maximo numero ingresado fue: %d", maxNumber);
	printf("\n El promedio de ambos numeros es: %f", averageNumber);




	return 0;
}
