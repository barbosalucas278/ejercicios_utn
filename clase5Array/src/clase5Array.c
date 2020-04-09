/*
 ============================================================================
 Name        : clase5Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "new.h"

#define QTY_EMPLEADOS 5

int main(void)
{
	setbuf(stdout, NULL);
	int arrayEdades[QTY_EMPLEADOS];
	int arraySalarios[QTY_EMPLEADOS];
	int i;
	int bufferEdad;
	int bufferSalario;
	int respuestaE;
	int respuestaS;
	int respuesta;
	int opcion;

	for(i = 0; i < QTY_EMPLEADOS; i++)
	{
		respuestaE = utn_getNumero(&bufferEdad, "Edad?\n","Error tiene que ser de 18 a 65\n",18,65,2);
		respuestaS = utn_getNumero(&bufferSalario, "Salario?\n","Error tiene que ser de 1000 a 100000\n",1000,100000,2);
		if(respuestaE == 0 && respuestaS == 0)
		{
			arrayEdades[i] = bufferEdad;
			arraySalarios[i] = bufferSalario;
		}
	}
	imprimirArrayInt(arrayEdades,QTY_EMPLEADOS);
	imprimirArrayInt(arraySalarios,QTY_EMPLEADOS);

	do
	{
		respuesta = utn_getNumero(&opcion, "1-Modificar Edad\n2-Modificar Salario\n3-Mostrar\n4-Ordenar\n6-Salir\n","Error tiene que ser de 1 a 6\n",1,6,2);
		if(respuesta == 0)
		{
			switch(opcion)
			{
				case 1:
					respuesta = utn_getNumero(&i, "Indice de la Edad?\n","Error indice fuera de rango\n",0,QTY_EMPLEADOS,2);
					respuestaE = utn_getNumero(&bufferEdad, "Edad?\n","Error tiene que ser de 18 a 65\n",18,65,2);
					if(respuestaE == 0 && respuesta == 0)
					{
						arrayEdades[i] = bufferEdad;
					}
					break;
				case 2:
					respuesta = utn_getNumero(&i, "Indice del salario?\n","Error indice fuera de rango\n",0,QTY_EMPLEADOS,2);
					respuestaS = utn_getNumero(&bufferSalario, "Salario?\n","Error tiene que ser de 1000 a 100000\n",1000,100000,2);
					if(respuestaS == 0 && respuesta == 0)
					{
						arraySalarios[i] = bufferSalario;
					}
					break;
				case 3:
					imprimirArrayInt(arrayEdades,QTY_EMPLEADOS);
					imprimirArrayInt(arraySalarios,QTY_EMPLEADOS);
					break;
				case 4:
					if(ordenar(arrayEdades,QTY_EMPLEADOS) == 0)
					{
						printf("\nSIIIIIII ordeno");
					}
					break;

			}
		}
	}while(opcion != 6);

	return EXIT_SUCCESS;
}



