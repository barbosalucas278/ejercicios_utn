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
/*				INT 			*/
static int getInt (int* pResultado);
static int isNumber (char* cadena);
/*				FLOAT 			*/
static int getFloat (float* pResultado);
static int isDecimalNumber (char* cadena);
/*				CHAR			*/
static int isChar (char* cadena);
/*			array				*/

int mostrar1Estudiante(int* pLegajo,char pApellido[][50] ,char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len,int pIndice)
{
	int ret=0;
	int i;

	for(i=0;i<len;i++)
	{
		if(pLegajo[i]==pIndice)
		{
			printf("Legajo: %d   Apellido: %s   Sexo: %s   Edad: %d   primer nota: %d   segunda nota: %d   Promedio: %.2f \n",pLegajo[i],pApellido[i], pSexo[i],pEdad[i],pNota1[i],pNota2[i],pPromedio[i]);
			ret = 1;
		}
	}

	return ret;
}

int cargarDatos(int* pLegajo,char pApellido[][50],char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len)
{
	int ret = 0;
	char bufferSexo[50];
	int bufferEdad;
	int bufferNota1;
	int bufferNota2;
	char bufferApellido[50];
	int i;

	if(pLegajo != NULL && pApellido != NULL && pSexo != NULL && pEdad!= NULL && pNota1 != NULL && pNota2!= NULL && pPromedio && len>0)
	{
		for(i=0;i<len;i++)
		{
				if(pLegajo[i]==0)
				{
					pLegajo[i] = i+1;
				}
				else
				{
					printf("Legajo en uso");
				}
				getString(bufferApellido,"Ingrese el apellido","ERROR\n",50,2);
				strcpy(pApellido[i],bufferApellido);
				getString(bufferSexo,"Ingrese el sexo","ERROR",50,2);
				strcpy(pSexo[i],bufferSexo);
				getNumber(&bufferEdad,"Ingrese la edad","ERROR",1,115,2);
				pEdad[i] = bufferEdad;
				getNumber(&bufferNota1,"Ingrese la primer nota","ERROR",1,10,2);
				pNota1[i] = bufferNota1;
				getNumber(&bufferNota2,"Ingrese la segunda nota","ERROR",1,10,2);
				pNota2[i] = bufferNota2;
				pPromedio[i] = ((float)pNota1[i] + pNota2[i])/2;
		}
		ret= 1;

		}

	return ret;
}

int mostrarEstudiantes(int* pLegajo,char pApellido[][50] ,char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len)
{
	int ret = 0;
	int i;
	if(pLegajo != NULL && pApellido != NULL && pSexo != NULL && pEdad!= NULL && pNota1 != NULL && pNota2!= NULL && pPromedio && len>0)
	{
		for(i=0;i<len;i++)
		{

			printf("Legajo: %d   Apellido: %s   Sexo: %s   Edad: %d   primer nota: %d   segunda nota: %d   Promedio: %.2f \n",pLegajo[i],pApellido[i], pSexo[i],pEdad[i],pNota1[i],pNota2[i],pPromedio[i]);
			ret = 1;
		}
	}
	return ret;

}
int ordenarLegajoEstudiantes(int* pLegajo,char pApellido[][50],char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len)
{
	int ret = 0;
	int bufferLegajo;
	char bufferSexo[50];
	char bufferApellido[50];
	int bufferEdad;
	int bufferNota1;
	int bufferNota2;
	float bufferPromedio;
	int flagDesordenado = 1;
	int i;
	if(pLegajo != NULL && pApellido!= NULL  && pSexo != NULL && pEdad!= NULL && pNota1 != NULL && pNota2!= NULL && pPromedio && len>0)
	{
		while(flagDesordenado)
		{
			flagDesordenado = 0;
			for(i=0;i<len;i++)
			{
				if(pPromedio[i]>pPromedio[i+1])
				{
					bufferLegajo = pLegajo[i+1];
					pLegajo[i+1] = pLegajo[i];
					pLegajo[i]	 = bufferLegajo;

					strcpy(bufferApellido, pApellido[i+1]);
					strcpy(pApellido[i+1], pApellido[i]);
					strcpy(pApellido[i], bufferApellido);

					strcpy(bufferSexo, pSexo[i+1]);
					strcpy(pSexo[i+1], pSexo[i]);
					strcpy(pSexo[i], bufferSexo);

					bufferEdad = pEdad[i+1];
					pEdad[i+1] = pEdad[i];
					pEdad[i]   = bufferEdad;

					bufferNota1 = pNota1[i+1]  ;
					pNota1[i+1] = pNota1[i];
					pNota1[i]	= bufferNota1;

					bufferNota2 = pNota2[i+1] ;
					pNota2[i+1] = pNota2[i];
					pNota2[i]	= bufferNota2;

					bufferPromedio = pPromedio[i+1] ;
					pPromedio[i+1] = pPromedio[i];
					pPromedio[i]   = bufferPromedio;

					flagDesordenado = 1;
				}
				else if (pPromedio[i]==pPromedio[i+1])
				{
					if(pLegajo[i]>pLegajo[i+1])
					{
						bufferLegajo = pLegajo[i+1];
						pLegajo[i+1] = pLegajo[i];
						pLegajo[i]	 = bufferLegajo;

						strcpy(bufferApellido, pApellido[i+1]);
						strcpy(pApellido[i+1], pApellido[i]);
						strcpy(pApellido[i], bufferApellido);

						strcpy(bufferSexo, pSexo[i+1]);
						strcpy(pSexo[i+1], pSexo[i]);
						strcpy(pSexo[i], bufferSexo);

						bufferEdad = pEdad[i+1];
						pEdad[i+1] = pEdad[i];
						pEdad[i]	 = bufferEdad;

						bufferNota1 = pNota1[i+1]  ;
						pNota1[i+1] = pNota1[i];
						pNota1[i]	 = bufferNota1;

						bufferNota2 = pNota2[i+1] ;
						pNota2[i+1] = pNota2[i];
						pNota2[i]	 = bufferNota2;

						flagDesordenado = 1;
					}
				}


			}
		}
	}
	return ret;

}































/*
 * \brief imrpime un array de string
 *
 *
 * */
int printArrayStr (char* pArray, int size)
{
	int ret = 0;
	int i;
	if(pArray != NULL && size > 0)
	{
		for(i=0;i<size;i++)
		{
			printf("El indice [%d] tiene como valor %d\n",i,pArray[i]);
		}
	}
	return ret;
}
/*
 * \brief imprime un array de float
 *
 * */
int printArrayFloat(float *pArrayFloat, int sizeFloat) {
	int i;
	int ret = -1;

	if (pArrayFloat != NULL && sizeFloat >0) {
		for (i = 0; i < sizeFloat; i++) {
			printf("El indice [%d] tiene como Valor %.2f\n", i,pArrayFloat[i]);
		}
		ret = 0;
	}

	return ret;
}

/*
 *
 * \brief imprime un array int y un array float
 *
 * */
int printArrayIntFloat(int *pArray, int size, float *pArrayFloat, int sizeFloat) {
	int i;
	int ret = -1;

	if (pArray != NULL && size > 0 && pArrayFloat != NULL && sizeFloat >0) {
		for (i = 0; i < size; i++) {
			printf("El indice [%d] tiene como Edad %d y nota %.2f\n", i, pArray[i],pArrayFloat[i]);
		}
		ret = 0;
	}

	return ret;
}

/*
 * \brief saca el promedio de los numeros de un array.
 * \param pArray
 * \param size
 * \param pPromedio
 * \return
 * */

int promedioArray (int* pArray,int size,int* pArray2, int size2,float* pPromedio)
{
	int ret = 0;
	int i;
	int acumulador = 0;
	float bufferPromedio;
	if(pArray != NULL && size >0 && pArray2 != NULL && size2 >0 && pPromedio != NULL)
	{
		for(i=0;	i<size;	  i++)
		{
			acumulador = pArray[i] + pArray2[i];
			bufferPromedio = acumulador / 2;
			*pPromedio=bufferPromedio;
		}

	ret = 1;
	}


	return ret;
}
/*
 *
 *
 * \brief se utiliza para cargar un array ded enteros
 *
 * */
int cargarArrayNota (int* pArray,int size,int indice)
{
	int ret = 0;
	int buffer;

	if(pArray != NULL && size >0)
	{

		if(getNumber(&buffer,"Ingrese una nota\n","ERROR\n",1,10,2))
		{
			pArray[indice] = buffer;
			ret = 1;
		}

	}

	return ret;
}
/*
 * \brief se utiliza para cargar un array ded enteros
 *
 *
 * */

int cargarArrayEdad (int* pArray,int size,int indice)
{
	int ret = 0;
	int buffer;

	if(pArray != NULL && size >0)
	{

		if(getNumber(&buffer,"Ingrese una edad\n","ERROR\n",1,115,2))
		{
			pArray[indice] = buffer;
			ret = 1;
		}

	}

	return ret;
}

/*
 * \brief inicializa un array de float en un determinado float.
 *
 * */

int initArrayFloat(float* pArray, int size, float pValor)
{
	int ret =0;
	int i;
	if(pArray != NULL && size>0)
	{
		for(i=0;i<size;i++)
		{
			pArray[i]= pValor;
			ret = 1;
		}
	}

	return ret;
}
/*
 * \brief inicializa un array de enteros en un determinado int.
 *
 * */

int initArrayInt(int* pArray, int size, int pValor)
{
	int ret =0;
	int i;
	if(pArray != NULL && size>0)
	{
		for(i=0;i<size;i++)
		{
			pArray[i]= pValor;
			ret = 1;
		}
	}

	return ret;
}
/*
 *
 * \brief funcion para ordenar un array INT con otro float
 *
 *
 *
 * */

int ordenarArrayIntFloat(int *pArrayInt, float *pArrayFloat, int size) {
	int i;
	int buffer;
	int bufferF;
	int flag = 1;
	int ret = -1;

	if (pArrayInt != NULL && pArrayFloat != NULL && size > 0) //se verifican que los valores de los arrya sno sean nulos
			{
		while (flag) {
			flag = 0; //hace que se produzcan varios ciclos de la iteración del for, asi puede ordenar varias veces hasta tener todo ordenado.
			for (i = 0; i < size - 1; i++) {
				if (pArrayInt[i] > pArrayInt[i + 1]) // realiza la comparacion con el valor del proximo indice.
				{
					//se swapea la edad si la siguiente
					buffer = pArrayInt[i];
					pArrayInt[i] = pArrayInt[i + 1];
					pArrayInt[i + 1] = buffer;
					//Se swapea el valor dle salario correspondiente al indice de la edad
					bufferF = pArrayFloat[i];
					pArrayFloat[i] = pArrayFloat[i + 1];
					pArrayFloat[i + 1] = bufferF;
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
 * \brief funcion para ordenar dos array INT
 *
 *
 *
 * */

int ordenarArrayInt_2(int *pArrayEdad, int *pArraySalario, int size) {
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

static int isNumber(char *cadena) {
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
		}
	}
	return ret;
}
/*
 * \brief se utiliza para tomar un numero entero.
 * \param pResultado es el valor de la direccion de memoria en donde voy a guardar lo que voy a tranformar con atoi().
 * \return 1 si es un int -1 si no es un int
 * */
static int getInt(int *pResultado) {
	int ret = 0;
	char buffer[MAX_ARRAY];
	if (pResultado != NULL) {
		fflush(stdin);
		buffer[MAX_ARRAY-1] = '\0';
		fgets(buffer, MAX_ARRAY, stdin);
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
static int isDecimalNumber(char *cadena) {
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
static int getFloat(float *pResultado) {
	int ret = -1;
	char buffer[MAX_ARRAY];
	if (pResultado != NULL) {
		fflush(stdin);
		fgets(buffer, MAX_ARRAY, stdin);
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

static int isChar (char* cadena)
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
			ret=1;
		}


	}

	return ret;
}
