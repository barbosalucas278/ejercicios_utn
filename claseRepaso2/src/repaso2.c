/*
Aplicar las siguientes funciones:
a. int getInt(char[], char[], int, int) para el ingreso y validación de datos de tipo entero.
b. int esPositivo(int) retorna 1 en caso de que el número recibido como parámetro sea positivo, 0 en caso contrario.
c. float promediarNumeros(int,int): recibe el acumulador y el contador de números y retorna el promedio.
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/*
 *\brief realiza el promedio entre un acumulador y un contador.
 *
 * \param x = acumulador y y = contador.
 *
 * \return retorna el promedio.
 *
 */
float promediarNumeros(int x, int y){
	float promedio;
	if(y!=0)
	{
		promedio = (float)x / y;
	}
	else
	{
		printf("No se puede dividir por 0 !!!");
	}
	return promedio;
}
/*
 *\brief verifica si es positivo o negativo
 *
 * \param un numero int
 *
 * \return retorna 1 si es positivo y 0 si es negativo
 *
 */

int esPositivo(int x){
	int ret;
	if(x>=0)
		ret = 1;
	else
		ret = 0;
	return ret;
}

/*
 *\brief imprime un numero y lo valida segun los limites.
 *
 * \param puntero del numero, mensaje, mensaje ded error, limites minimo y maximo.
 *
 * \return retorna 0 si no es un numero y 1 si es un numero.
 * */
int getNumero (int* pResultado, char* mensaje, char* mensajeError, int min, int max)
{
	int num;
	int ret = 0;
	printf("%s", mensaje);
	do
	{
		fflush(stdin);
		if(scanf("%d",&num)==1)
		{

			if(num>min && num <max)
			{
				*pResultado = num;
				ret = 1;
			}
			else
			{
				printf("%s",mensajeError);
			}
		}
		else
		{
			printf("%s",mensajeError);
		}

	}while(ret==0);

	return ret;
}
