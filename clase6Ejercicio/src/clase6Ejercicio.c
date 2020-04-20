/*
 ============================================================================
 Hacer un programa que le pida 10 numeros al usuario y los guarde en un array
1) analizar el array e imprimir:
Promedio
Maximo
Minimo
2) Pedirle al usuario que ingrese un numero e indicar si el mismo está o no en el array.
3) Imprimir el array ordenado de mayor a menor
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


int main() {
	setbuf(stdout, NULL);
	int option;
	int arrayN[CANT_NUMEROS];
	int retA;
	int i;
	int buffer;
	int promedio;
	int maximo;
	int minimo;
	getNumber(&buffer,"Ingrese un número","Error, opcion incorrecta",MAX,MIN,2);
	for(i=0; i<CANT_NUMEROS; i++)
	{
		retA =
		if(retA){
			arrayN[i] = buffer;
		}
		printf("%d \n", arrayN[i]);
	}

	/*do
	{
		getNumber(&option,"¿Que desea hacer?\n1-Analizar el array\n2Verificar valor\nMostrar ordenado de mayor a menor","Error, opcion incorrecta",1,4,2);
		switch(option)
		{
			case 1:
				ordenar(arrayN,10);
				printArrayInt(arrayN, CANT_NUMEROS);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}while(option != 4);*/

	return 0;
}
