/*
 ============================================================================
 Name        : FUNCIONES.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main() {
	setbuf(stdout, NULL);
	int number;
	float nota;
	//float numberfloat;
	//char character;
	char texto [MAX_ARRAY_CHAR];
	int arrayEdades[10];
	float arrayNotas[10];
	//TEST INT
	/*if(getNumber(&number,"Ingrese un numero\n","ERROR\n",MIN,MAX,2))
	{
		printf("retorno 1\n");
	}
	else
	{
		printf("Retorno -1\n");
	}

	printf("%d\n",number);*/

	//TEST FLOAT
	/*getNumberDecimal(&numberfloat,"Ingrese un numero\n","ERROR\n",MIN,MAX,2);
	printf("%.2f",numberfloat);*/

	//TEST CHAR
	/*getChar(&character,"Ingrese un caracter\n","ERROR, no es un caracter\n",'F','z',2);
	printf("%c\n",character);*/
	//TEST STRING
	/*getString(texto,"Ingrese el apellido\n","Texto invalido\n",MAX_ARRAY_CHAR,2);
	printf("%s",texto);*/

	//TEST ARRAY
	/*getNumber(&number,"En que valor quiere inicializar el array EDADES?","ERROR, edad incorrecta",1, 115, 2);
	initArrayInt(arrayEdades,10,number);
	getNumberDecimal(&nota,"En que valor desea inicializar el array NOTAS?\n","ERROR, Eeso no es una nota valida\n",1,10,2);
	initArrayFloat(arrayNotas,10,nota);
	rgarArrayInt(arrayEdades,10);
	printArrayInt(arrayEdades, 10);
	ordenarArrayIntFloat(arrayEdades,arrayNotas,10);
	printArrayIntFloat(arrayEdades,10,arrayNotas,10);*/


	return 0;
}
