/*
 * utn.c
 *
 *  Created on: 11 abr. 2020
 *      Author: pocho
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utn.h"

/*
 *
 * \brief funcion para ordenar un array INT
 *
 *
 *
 * */
int ordenar(int *pArrayEdad, int *pArraySalario, int size) {
	int i;
	int buffer;
	int bufferS;
	int flag = 1;
	int ret = -1;

	if (pArrayEdad != NULL && pArraySalario != NULL && size > 0) //se verifican que los valores de los arrya sno sean nulos
			{
		while (flag) {
			flag = 0; //hace que se produzcan varios ciclos de la iteración del for, asi puede ordenar varias veces hasta tener todo ordenado.
			for (i = 0; i < size - 1; i++) {
				if (pArrayEdad[i] > pArrayEdad[i + 1]) // realiza la comparacion con el valor del proximo indice.
						{
					//se swapea la edad si la siguiente
					buffer = pArrayEdad[i];
					pArrayEdad[i] = pArrayEdad[i + 1];
					pArrayEdad[i + 1] = buffer;
					//Se swapea el valor dle salario correspondiente al indice de la edad
					bufferS = pArraySalario[i];
					pArraySalario[i] = pArraySalario[i + 1];
					pArraySalario[i + 1] = bufferS;
					flag = 1; //esta flag me asegura que la comparacion se realice hasta que este todo ordenado.
				}
			}
			size--;
		}
		ret = 0;
	}
	return ret;
}

/*
 *
 *
 *
 *
 * */
int printArrayInt(int *pArray, int size) {
	int i;
	int ret = -1;

	if (pArray != NULL && size > 0) {
		for (i = 0; i < size; i++) {
			printf("El indice [%d] tiene como valor %d \n", i, pArray[i]);
		}
		ret = 0;
	}

	return ret;
}
/*
 * \brief se utiliza para validar si es un int positivo o negativo, sin ninguna otro caracter.
 * \param la cadena de caracteres previamente ingresada por el usuario
 * \return 1 si es un int von la validacion correspondiente -1 si no es un int.
 *
 * */

int isNumber(char *cadena) {
	int ret=0;
	int i;
	if (cadena != NULL) {
		for (i = 0; cadena[i] != '\0'; i++) {
			if (i == 0 && cadena[i] == '-') {
				continue;
			}
			if(cadena[i]>='0' && cadena[i] <='9'){
				continue;
			}
			if ((cadena[i] <= '~' && cadena[i] >= ':')|| (cadena[i]<='/' && cadena[i]>='!')) //lo que hice fue poner como invalidos
			{
				break;
			}
		}
		if (cadena[i] == '\0') {
			ret = 1;
			printf("es correcta\n");
		} else {
			printf("Es incorrecta\n");
		}
	}
	return ret;
}
/*
 * \brief se utiliza para tomar un numero entero.
 * \param pResultado es el valor de la direccion de memoria en donde voy a guardar lo que voy a tranformar con atoi().
 * \return 1 si es un int -1 si no es un int
 * */
int getInt(int *pResultado) {
	int ret = 0;
	char buffer[MAX_ARRAY_CHAR];
	if (pResultado != NULL) {
		fflush(stdin);
		buffer[MAX_ARRAY_CHAR-1] = '\0';
		fgets(buffer, MAX_ARRAY_CHAR, stdin);
		if (isNumber(buffer)) {
			*pResultado = atoi(buffer);
			ret = 1;
		}
	}

	return ret;
}
/*
 * \brief se utiliza para pedirle al usuario un numero
 * \param pResultado es la direccion de memoria en donde voy a guardar el numero obtenido
 * \param mensaje es la cadena de caracteres que muestra al inicio de la funcion al usuario
 * \param mensajeError es la cadena de caracteres que se muestra al usuario cuando sucede un error
 * \param min rango minimo del valor ingresado
 * \param max rango maximo del valor ingresado
 * \param reintentos el numero de reintentos para iongresar el numero
 * \return -1 si hay un error y 1 si es un numero.
 *
 */

int getNumber(int *pResultado, char *mensaje, char *mensajeError, int min,
		int max, int reintentos) {
	int ret=0;
	int num;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
			&& min <= max && reintentos >= 0) {
		while (reintentos > 0) {
			printf("%s", mensaje);
			if (getInt(&num))  // si scanf =1 es porque pudo abrir la variable
			{
				if (num <= max && num >= min)
				{
					break;
				}
			}
			reintentos--;
			printf("%s", mensajeError);
		}
		if (reintentos > 0) {
			*pResultado = num; //se asigna en la direccion de memoria del parametro el valor del numero ingresado.
			ret = 1;
		}

	}
	return ret;
}
/*
 * \brief se utiliza para validar si es un int positivo,negativo, con come y sin ninguna otro caracter invalido.
 * \param la cadena de caracteres previamente ingresada por el usuario
 * \return 1 si es un int von la validacion correspondiente -1 si no es un int.
 *
 * */
int isDecimalNumber(char *cadena) {
	int i;
	int ret = 1;
	if (cadena != NULL) {
		for (i = 0; cadena[i] != '\0'; i++) {
			if ((i == 0 && cadena[i] == '-') || cadena[i] == '.') {
				continue;
			}
			if (cadena[i] < '0' || cadena[i] > '9') {
				ret = -1;
				break;
			}
		}

	}
	return ret;
}
/*
 * \brief se utiliza para tomar un numero float.
 * \param pResultado es el valor de la direccion de memoria en donde voy a guardar lo que voy a tranformar con atof().
 * \return 1 si es un float -1 si no es un float
 * */
int getFloat(float *pResultado) {
	int ret = -1;
	char buffer[MAX_ARRAY_CHAR];
	if (pResultado != NULL) {
		fflush(stdin);
		fgets(buffer, MAX_ARRAY_CHAR, stdin);
		if (isDecimalNumber(buffer)) {
			*pResultado = atof(buffer);
			ret = 1;
		}
	}
	return ret;
}
/*
 * \brief se utiliza para pedirle al usuario un numero decimal
 * \param pResultado es la direccion de memoria en donde voy a guardar el numero decimal obtenido
 * \param mensaje es la cadena de caracteres que muestra al inicio de la funcion al usuario
 * \param mensajeError es la cadena de caracteres que se muestra al usuario cuando sucede un error
 * \param min rango minimo del valor ingresado
 * \param max rango maximo del valor ingresado
 * \param reintentos el numero de reintentos para iongresar el numero
 * \return -1 si hay un error y 1 si es un numero.
 *
 */
int getNumberDecimal(float *pResultado, char *mensaje, char *mensajeError,
		int min, int max, int reintentos) {
	int ret;
	float num;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
			&& min <= max && reintentos >= 0) {
		while (reintentos > 0) {
			printf("%s", mensaje);
			if (getFloat(&num))  // si scanf =1 es porque pudo abrir la variable
					{
				if (num <= max && num >= min) {
					break;
				}
			}
			reintentos--;
			printf("%s", mensajeError);
		}
		if (reintentos == 0) {
			ret = -1;
		} else {
			*pResultado = num; //se asigna en la direccion de memoria del parametro el valor del numero ingresado.
			ret = 1;
		}
	}
	return ret;
}

/*
 * \brief se utiliza para ingresar un caracter.
 *
 * \param pResultado es la direccion de memoria en donde voy a guardar el caracter obtenido
 * \param mensaje es la cadena de caracteres que muestra al inicio de la funcion al usuario
 * \param mensajeError es la cadena de caracteres que se muestra al usuario cuando sucede un error
 * \param min rango minimo del caracter ingresado
 * \param max rango maximo del caracter ingresado
 * \param reintentos el numero de reintentos para ingresar el caracter
 *
 * \return -1 si hay un error y 1 si es un caracter.
 *
 */

int getChar(char *pResultado, char *mensaje, char *mensajeError, char min,
		char max, int reintentos) {
	int ret = -1;
	char bufferChar;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
			&& min <= max && reintentos >= 0) {
		while (reintentos > 0) {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%c", &bufferChar)) {
				if (bufferChar >= min && bufferChar <= max) {
					break;
				}
				reintentos--;
				printf("%s", mensajeError);
			}
		}
		if (reintentos == 0) {
			printf("%s", mensajeError);
		} else {
			*pResultado = bufferChar;
			ret = 1;
		}
	}
	return ret;
}

/*
 * \brief se utiliza para ingresar una cadena de caracteres.
 *
 * \param pResultado es la direccion de memoria en donde voy a guardar la cadena de caracteres obtenido
 * \param mensaje es la cadena de caracteres que muestra al inicio de la funcion al usuario
 * \param mensajeError es la cadena de caracteres que se muestra al usuario cuando sucede un error
 * \param min rango minimo de caracteres ingresado
 * \param max rango maximo de caracteres ingresado
 * \param reintentos el numero de reintentos para ingresar la cadena.
 *
 * \return -1 si hay un error y 1 si es una cadena.
 *
 */

int getString (char* cadena, char* mensaje, char* mensajeError, int len, int reintentos)
{
	int ret =0;
	char buffer [MAX_ARRAY_CHAR];
	if(cadena != NULL && mensaje != NULL && mensajeError != NULL && len >0 && reintentos >=0)
	{
		while(reintentos > 0)
		{
			printf("%s",mensaje);
			fflush(stdin);
			fgets(buffer,MAX_ARRAY_CHAR,stdin);
			buffer[MAX_ARRAY_CHAR-1] = '\0';
			if(isChar(buffer))
			{
				if(strlen(buffer) <= len)
				{
					break;
				}
			}
			else
			{
				reintentos--;
				printf("%s",mensajeError);
			}
		}
		if(reintentos > 0)
		{
			strcpy(cadena , buffer);
			ret = 1;
		}
	}

	return ret;
}

/*
 * \brief se utiliza para validar si es un char.
 * \param la cadena de caracteres previamente ingresada por el usuario
 * \return 1 si es un int von la validacion correspondiente -1 si no es un char.
 *
 * */

int isChar (char* cadena)
{
	int i=0;
	int ret=0 ;
	if(cadena != NULL)
	{
		for(i=0; cadena[i]!= '\0' ; i++)
		{
			if(cadena[i] >='A' && cadena[i] <='z')
			{
				continue;
			}
			if(cadena[i]>='0' && cadena[i]<='9')
			{
				break;
			}
		}
		if(cadena[i]=='\0')
		{
			printf("Es correcta\n");
			ret=1;
		}
		else
		{
			printf("Es incorrecta\n");
		}

	}

	return ret;
}
