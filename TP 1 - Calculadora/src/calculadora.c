#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {

	setbuf(stdin, NULL);
	int x = 0;
	int y = 0;
	int sumaRes;
	int restaRes;
	int multRes;
	float divRes;
	int factorialUno;
	int factorialDos;
	int flag1 = 0;
	int flag2 = 0;
	int opcion;

	do {

		printf("*****************MENU DE OPCIONES*****************\n");
		printf("\n1. Ingresar el primer numero: (A = %d)", x);
		printf("\n2. Ingresar el segundo numero: (B = %d)", y);
		printf("\n3. Calcular: ");
		printf("\n a) Calcular la suma (A+B)");
		printf("\n b) Calcular la resta (A-B)");
		printf("\n c) Calcular la division (A/B)");
		printf("\n d) Calcular la multiplicacion (A*B)");
		printf("\n e) Calcular el factorial (A!) (B!)");
		printf("\n4. Informar los resultados");
		printf("\n5. Salir");
		printf("\nIngrese una opcion:\n");
		scanf("%d", &opcion);

	switch(opcion) {

		case 1:

			system("cls");
			printf("Ingrese el primer numero: ");
			scanf("%d", &x);
			flag1 = 1;
			break;

		case 2:

			if (flag1 == 0) {

				printf("Error, debe ingresar el primer numero antes de ingresar el segundo.\n\n");
			}

			else {

				system("cls");
				printf("Ingrese el segundo numero: ");
				scanf("%d", &y);
				flag2 = 1;
			}

			break;

		case 3:

			if (flag1 == 0 || flag2 == 0) {

				printf("Error. Debe ingresar ambos numeros antes de realizar las operaciones.\n\n");
			}
			else {

			system("cls");
			printf("Calculando todas las operaciones... \n");
			sumaRes = sumar(x, y);
			restaRes = restar(x, y);
			multRes = multiplicar(x, y);
			divRes = dividir(x, y);
			factorialUno = factorialA(x);
			factorialDos = factorialB(y);

			}
			break;

		case 4:

			system("cls");
			printf("Resultados:\n");
			printf("\na) Suma: %d ", sumaRes);
			printf("\nb) Resta: %d", restaRes);

			if (y == 0) {
				printf("\nc) No se puede dividir entre 0");
			}
			else {

				printf("\nc) Division: %.2f", divRes);
			}

			printf("\nd) Multiplicacion: %d", multRes);
			printf("\ne) El factorial de %d es: %d\t El factorial de %d es: %d", x, factorialUno , y, factorialDos);
			printf("\n");
			break;

		case 5:

			printf("\nSaliendo...");
			system("pause");
			break;

		default:

			system("cls");
			printf("Error! La opcion ingresada no es valida.");
			system("pause");
			break;

	}

	}while(opcion != 5);




}
