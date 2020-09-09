#include <stdio.h>

float sumar (int x, int y) //evalua los valores ingresados, realiza la suma y almacena el resultado en la variable resultado
{


	int resultado;
	resultado = x + y;
	return resultado;
}

int restar (int x, int y) //evalua los valores ingresados, realiza la resta y almacena el resultado en la variable resultado
{

	int resultado;
	resultado = x - y;
	return resultado;
}

float dividir (int x, int y) //evalua los valores ingresados, realiza la division y almacena el resultado en la variable resultado
{

	float resultado;
	resultado = (float) x / y;
	return resultado;
}

int multiplicar (int x, int y) //evalua los valores ingresados, realiza la multiplicacion y almacena el resultado en la variable resultado
{

	int resultado;
	resultado = x * y;
	return resultado;
}


int factorialA (int numeroUno) //evalua el valor ingresado, realiza la factorizacion y almacena el resultado en la variable factorial
{
    int factorial=1;
    int i;
    int numero=numeroUno;

    for (i=1; i<=numero; i++) {

    		factorial = factorial*i;
    }


    return factorial;
}



int factorialB (float numeroDos) //evalua el valor ingresado, realiza la factorizacion y almacena el resultado en la variable factorial
{
    float factorial=1;
    float i;
    float numero=numeroDos;

    for (i=1; i<=numero; i++) {

        	factorial = factorial*i;

    }


    return factorial;
}
