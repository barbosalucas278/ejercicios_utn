/*
 ============================================================================
 Name        : Clase5ejerciciobug.c
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
	int retS;
	int retE;
	int i;

	for(i=0 ; i< CANT_EMPLEADOS ; i++)
	{
		retE = utn_getNumero(&bufferEdad,"Cual es la edad?\n","Edad incorrecta, entre 18 y 65\n",18,65,2);
		retS = utn_getNumero(&bufferSalario,"Cual es el salario?\n","Salario incorrecto, entre 7000 y 65000\n",7000,65000,2);
		if(retE == 0 && retS == 0)
		{
			arrayEdades[i] = bufferEdad;
			arraySalarios[i] = bufferSalario;
		}
	}
	do
	{
		if(utn_getNumero(&option,"Ingrese una opcion\n1-Modificar edades\n2-Modificar salarios\n3-Mostrar datos\n4-Ordenar datos\n5-Salir","VALOR INVALIDO, entre 1 y 6",1,6,1)==0)
		{
			switch(option)
			{
				case 1:
					if(
					utn_getNumero(&i,"Que indice desea modificar?","Indice invalido entre 1 y 10",0,CANT_EMPLEADOS,2)==0 &&
					utn_getNumero(&bufferEdad,"Cual es la edad?\n","Edad incorrecta, entre 18 y 65\n",18,65,2)==0)
					{
						arrayEdades[i] = bufferEdad;
					}
					break;
				case 2:
					if(
					utn_getNumero(&i,"Que indice desea modificar?","Indice invalido entre 1 y 10",0,CANT_EMPLEADOS,2)==0 &&
					utn_getNumero(&bufferSalario,"Cual es el salario?\n","Salario incorrecto, entre 7000 y 65000\n",7000,65000,2)==0)
					{
						arraySalarios[i] = bufferSalario;
					}
					break;
				case 3:
					imprimirDosArrayInt(arrayEdades,arraySalarios,CANT_EMPLEADOS);
					break;
				case 4:
					if(ordenar(arrayEdades,arraySalarios,CANT_EMPLEADOS))
					{
						printf("se ordenó\n");
					}
					break;
				case 5:
					break;
			}
		}
	}while(option != 5);

	return 0;
}
