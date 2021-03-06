/*
 ============================================================================
 Name        : Brindis.c
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
	char select;
	char exit = 'd';
	int flagA;
	int flagB;

	flagA = 0;
	flagB = 0;

	do {  // Comienzo de DO WHILE

		system("cls");
		printf("\n Ingrese una opcion :\n");
		printf("\n  บบบบบบบบบบบบบบบบบบบบบบ\n");
		printf("\n 	A) Saludar. 		\n");
		printf("\n 	B) Brindar. 		\n");
		printf("\n 	C) Despedirse. 		\n");
		printf("\n 	D) Salir. 			\n");
		printf("\n  บบบบบบบบบบบบบบบบบบบบบบ\n");
		fflush(stdin);
		scanf("%c", &select);

		while (select != 'a' && select != 'b' && select != 'c' && select != 'd') {
			system("cls");
			printf(
					"\n Error, ingrese una opcion:  A) Saludar.  B) Brindar.  C) Despedirse.  D) Salir.");
			fflush(stdin);
			scanf("%c", &select);
		}

		switch (select) {

		case 'a':
			system("cls");
			flagA = 1;
			printf("\n Hola Hola!");
			fflush(stdin);
			scanf("%c", &select);

			break;

		case 'b':
			if (flagA == 1) {
				system("cls");
				flagB = 1;
				printf("\n Genial, brindemos! ");
				fflush(stdin);
				scanf("%c", &select);

			} else {
				system("cls");
				printf("\n No puedes brindar sin saludar primero! ");
				fflush(stdin);
				scanf("%c", &select);

			}
			break;

		case 'c':
			if (flagB == 0) {
				system("cls");
				printf("\n No puedes irte sin brindar.");
				fflush(stdin);
				scanf("%c", &select);

			}

			else if (flagA == 0) {
				system("cls");
				printf("\n No puedes irte sin saludar antes");
				fflush(stdin);
				scanf("%c", &select);

			} else {
				system("cls");
				printf("\n Gracias por venir nos vemos!");
				fflush(stdin);
				scanf("%c", &select);
				flagA = 0;
				flagB = 0;

			}

			break;

		default:
			scanf("%c", &exit);
			printf("\n Saliendo");
			break;
		}

	} while (exit == 'd'); // finaliza do while

	return 0;
}
