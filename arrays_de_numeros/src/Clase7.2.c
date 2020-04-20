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
#include "func.h"

int main() {
	long i;
	int iMax;
	int iMin;
	long option;
	long numeros[CANT_NUMEROS];
	int respuesta;
	long bufferInt;
	long intMax;
	long intMin;
	float promedio;
	long numeroBusqueda;

	setbuf(stdout, NULL);
	for(i=0 ; i< CANT_NUMEROS ; i++)
	{
		respuesta = getNumber(&bufferInt,"Ingrese un número\n","n{umero incorrecto, entre -100 y 100\n",-100,100,2);
		if(respuesta == 1)
		{
			numeros[i] = bufferInt;
		}

	}
	do
		{
			printf("-----------------------------------------------------------\n");
			getNumber(&option,"¿Que desea hacer?\n1-Analizar el array\n2-Verificar valor\n3-Mostrar ordenado de mayor a menor\n4-Modificar un valor\n5-Salir","Error, opcion incorrecta\n",1,5,2);
			printf("-----------------------------------------------------------\n");
			switch(option)
			{
				case 1:
					ordenar(numeros,CANT_NUMEROS);
					getMinMaxArray(numeros,CANT_NUMEROS,&iMax,&iMin,&intMax,&intMin);
					promedioArrayLong(numeros,CANT_NUMEROS,&promedio);
					printf("El promedio es %.2f \n",promedio);
					printf("El minimo es de indice %d y el numero es %ld \n",iMin,intMin);
					printf("El máximo es de indice %d y el numero es %ld \n",iMax,intMax);
					break;
				case 2:
					getNumber(&numeroBusqueda,"Ingrese el numero que desea buscar","ERROR, numero invalido",-100,100,2);
					buscarEnArray(numeros, CANT_NUMEROS, numeroBusqueda);
					break;
				case 3:
					imprimirArrayInt(numeros,CANT_NUMEROS);
					break;
				case 4:
					getNumber(&i,"Ingrese el indice que desea modificar","ERROR, indice invalido",0,MAX,2);
					modificarValorArray(numeros,CANT_NUMEROS,&i);
					break;
				case 5:
					break;
			}
		}while(option != 5);


	return 0;
}
