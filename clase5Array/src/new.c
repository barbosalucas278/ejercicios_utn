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
 * \brief funcion para ordenar un array INT
 *
 *
 *
 * */
int ordenar(int pArray[],int size)
{
	int flagSwap=1;
	int i;
	int buffer;
	int retorno = -1;
	if(pArray != NULL && size > 0)
	{
		while(flagSwap)
		{
			flagSwap = 0;
			for(i = 0 ; i < size-1 ; i++)
			{
				if(pArray[i] > pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
		}
		retorno = 0;
	}
	return retorno;
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
	int retorno = -1;
	if(pArray != NULL && size >0)
	{
	for(i = 0; i < size; i++)
	{
		printf("El indice [%d] tiene como valor: %d \n", i, pArray[i]);
	}
	retorno = 0;
	}
	return 0;
}
/*
 * new.c
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
int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
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



