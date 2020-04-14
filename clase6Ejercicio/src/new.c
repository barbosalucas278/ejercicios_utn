/*
 * new.c
 *
 *  Created on: 2 abr. 2020
 *      Author: pocho
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/*
 *
 * \brief funcion para sacar el promedio entre los numeros interos de un array.
 *
 *
 *
 * */
int damePromedioArr (int* pArray, int size, float* pResultado)
{

}
/*
 *
 * \brief funcion para ordenar un array INT
 *
 *
 *
 * */
int ordenar(int* pArrayEdad,int* pArraySalario,int size)
{
	int i;
	int buffer;
	int bufferS;
	int flag=1;
	int ret = -1;

	if(pArrayEdad != NULL && pArraySalario != NULL && size > 0) //se verifican que los valores de los arrya sno sean nulos
	{
		while(flag)
		{
			flag = 0; //hace que se produzcan varios ciclos de la iteración del for, asi puede ordenar varias veces hasta tener todo ordenado.
			for(i=0 ; i<size-1 ; i++)
			{
				if(pArrayEdad[i]>pArrayEdad[i+1]) // realiza la comparacion con el valor del proximo indice.
				{
					//se swapea la edad si la siguiente
					buffer = pArrayEdad[i];
					pArrayEdad[i] = pArrayEdad[i+1];
					pArrayEdad[i+1] = buffer;
					//Se swapea el valor dle salario correspondiente al indice de la edad
					bufferS = pArraySalario[i];
					pArraySalario[i] = pArraySalario[i+1];
					pArraySalario[i+1] = bufferS;
					flag=1; //esta flag me asegura que la comparacion se realice hasta que este todo ordenado.
				}
			}
			size--;
		}
		ret = 0;
	}
	return ret;
}


/***
 *
 *\brief imprime un array ya construido.
 *
 *
 */
int imprimirArrayInt (int* pArray, int size)
{
	int i;
	int ret =-1;

	if(pArray != NULL && size>0)
	{
		for(i=0 ; i<size ; i++)
		{
			printf("El indice [%d] tiene como valor %d \n",i,pArray[i]);
		}
		ret = 0;
	}

	return ret;
}
/*
 * valida si la cadena es numerica
 *
 *  Created on: 2 abr. 2020
 *      Author: pocho
 */

static int esNumerica(char* cadena){
	int ret = -1;
	int i = 0;
	if(cadena!=NULL)
	{
		while(cadena[i]!='\0')
		{
			if(cadena[i]<'0' || cadena[i]>'9')
					break;
				i++;
			}
		if (cadena[i] == '\0')
			ret = 1;
		}
	return ret;
}


/*
 * new.c
 *
 *  Created on: 2 abr. 2020
 *      Author: pocho
 */
static int getInt(int* pResultado)
{
	int ret = -1 ;
	char buffer[64];
	fgets(buffer, sizeof(buffer),stdin);
	buffer[strlen(buffer)-1] = '\0';
	//FUNCION QUE VALIDA LA CADENA SEGÚN CRITERIO ESTABLECIDO
	if(esNumerica(buffer)){
		*pResultado = atoi(buffer);  // <----- atoi() recibe cadena de caracteres y devuelve int. se usa con <stdlib.h>
		ret = 1 ;
	}

	return ret;
}
/*
 * new.c
 *
 *  Created on: 2 abr. 2020
 *      Author: pocho
 */
int getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int ret;
	int num;
		while(reintentos>0)
		{
			printf("%s",mensaje);
			fflush(stdin);
			if(getInt(&num)==1)  // si scanf =1 es porque pudo abrir la variable
			{
				if(num<=maximo && num>=minimo)
				{
					break;
				}
			}
			reintentos--;
			printf("%s",mensajeError);
		}
		if(reintentos==0)
		{
			ret = -1;
		}
		else
		{
			*pResultado = num;  //se asigna en la direccion de memoria del parametro el valor del numero ingresado.
			ret = 0;
		}

	return ret;
}



