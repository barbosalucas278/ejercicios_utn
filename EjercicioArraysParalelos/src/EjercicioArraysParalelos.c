/*
 ============================================================================
 Name        : EjercicioArraysParalelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main() {
	setbuf(stdout, NULL);
	int legajo[MAX_ARRAY];
	char apellido[MAX_ARRAY];
	int edad[MAX_ARRAY];
	char sexo[MAX_ARRAY];
	int nota1[MAX_ARRAY];
	int nota2[MAX_ARRAY];
	float promedio[MAX_ARRAY];
	int i;
	int option;
	if(getNumber(&option,"Que desea hacer?\n1-Inicializar los arrays\n2-Cargar los datos\3-Mostrar 1 estudiante\4-Mostrar todos los estudiantes\n5-Ordenar por legajo\6-Salir\n","ERROR\n",1,6,2))
	{
		do{
		switch(option)
		{
		case 1:
			if(initArrayInt(legajo,MAX_ARRAY,0))
				printf("1");
			if(initArrayChar(apellido,MAX_ARRAY,0))
				printf("1");
			if(initArrayInt(edad,MAX_ARRAY,0))
				printf("1");
			if(initArrayChar(sexo,MAX_ARRAY,0))
				printf("1");
			if(initArrayInt(nota1,MAX_ARRAY,0))
				printf("1");
			if(initArrayInt(nota2,MAX_ARRAY,0))
				printf("1");
			if(initArrayFloat(promedio,MAX_ARRAY,0))
				printf("1");
			break;
		case 2:
			cargarArray(legajo,MAX_ARRAY,apellido,MAX_ARRAY,edad,MAX_ARRAY,sexo,MAX_ARRAY,nota1,MAX_ARRAY,nota2,MAX_ARRAY,promedio,MAX_ARRAY);
			break;
		/*printArrayInt(legajo,MAX_ARRAY);
		printArrayStr(apellido,MAX_ARRAY);
		printArrayInt(edad,MAX_ARRAY);
		printArrayStr(sexo,MAX_ARRAY);
		printArrayInt(nota1,MAX_ARRAY);
		printArrayInt(nota2,MAX_ARRAY);
		printArrayFloat(promedio,MAX_ARRAY);
*/
		}

		}while(option != 6);
	}
	for (i=0;i<MAX_ARRAY;i++)
	{

	}


	return 0;
}
