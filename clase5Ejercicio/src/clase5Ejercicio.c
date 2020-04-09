/*
 ============================================================================
 Name        : clase5Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "new.h"

#define CANT_EMPLEADOS 5

int main()
{
	setbuf(stdout, NULL);
	int option;
	int arrayEdades[CANT_EMPLEADOS];
	int arraySalarios[CANT_EMPLEADOS];
	int bufferEdad;
	int bufferSalario;
	int i;
	for(i=0 ; i<CANT_EMPLEADOS ; i++)
	{
		if((utn_getNumero(&bufferEdad,"Cual es la edad?","Edad incorrecta, entre 18 y 65",18,65,1)) == 0
				&&
		   (utn_getNumero(&bufferSalario,"Cual es el salario?","Salario incorrecto, entre 7000 y 65000",7000,65000,1)) ==0)
		{
			arrayEdades[i] = bufferEdad;
			arraySalarios[i] = bufferSalario;
		}
	}
	do
	{
		if(utn_getNumero(&option,"Ingrese una opcion\n1-Modificar edades\n2-Modificar salarios\n3-Mostrar datos\n4-Ordenar datos","VALOR INVALIDO, entre 1 y 6",1,6,1))
		{
			switch(option)
			{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
				default:
					printf("Opcion incorrecta\nIngrese una opcion");
					utn_getNumero(&option,"Ingrese una opcion\n1-Modificar edades\n2-Modificar salarios\n3-Mostrar datos\n4-Ordenar datos","VALOR INVALIDO, entre 1 y 6",1,6,1);
					break;
			}
		}
	}while(option != 6);
	return 0;
}
