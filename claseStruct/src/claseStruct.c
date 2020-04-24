/*
 ============================================================================
 Name        : claseStruct.c
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


typedef struct{
	char nombre[50];
	char apellido[50];
	int legajo;
}persona;

int main() {
	setbuf(stdout, NULL);
	persona agenda[MAX_ARRAY];
	int i;
	int option;
	do{
		getNumber(&option,"Que desea hacer?\n1-Altas\n2Mostrar agenda\n3-Salir","OPCION INCORRECTA",1,3,2);
		switch(option)
		{
		case 1:
			for(i=0;i<MAX_ARRAY;i++)
			{
				getString(agenda[i].nombre,"Ingrese el nombre","nombre invalido",50,2);
				getString(agenda[i].apellido,"Ingrese el apellido","apellido invalido",50,2);
				agenda[i].legajo = i;
			}
			break;
		case 2:
			for(i=0;i<MAX_ARRAY;i++)
			{
				printf("Nombre:  %s Apellido:  %s Legajo:  %d\n",agenda[i].nombre,agenda[i].apellido,agenda[i].legajo);
			}
			break;
		case 3:
			break;
		}
	}while(option!= 3);

	return EXIT_SUCCESS;
}
