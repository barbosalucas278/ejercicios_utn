

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
/*
 *
 * \brief sirve para modificar un valor long en un array
 *
 * */
int modificarValorArray (long* pArray, int size, long* pIndice)
{
	int ret = 0;
	long buffer;
	int i;
	if(pArray != NULL && size>0 && pIndice != NULL)
	{
	for(i=0; i<size; i++)
		{
			if(*pIndice == pArray[i])
			{
				getNumber(&buffer,"Ingrese el numero","ERROR numero incorrecto",-100,100,2);
				pArray[i] = buffer;
				ret = 1;
			}
		}
	}


	return ret;
}
/*
 *
 * \brief busca en un array el numero que el usuario queire
 * \param pArray puntero del array
 * \param size tamaño del array
 * \param pNumero puntero del valor del numero
 * \return 0 si el numero no está y 1 si el numero está en el array
 *
 **/
int buscarEnArray(long* pArray, int size, long pNumero)
{
	int ret = 0;
	int i;
	if(pArray != NULL && size >0 && pNumero >0)
	{
		for(i=0; i<size; i++)
		{
			if(pArray[i]==pNumero)
			{
				ret = 1;
				printf("Pertenece al array en el indice : %d \n",i);
				break;
			}
		}
		if(ret==0)
		{
			printf("No pertenece al array\n");
		}
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

int promedioArrayLong (long* pArray,int size,float* pPromedio)
{
	int ret = 0;
	int i;
	long acumulador = 0;
	long contador = 0;
	if(pArray != NULL && size >0 && pPromedio != NULL)
	{
		for(i=0;	i<size;	  i++)
		{
			acumulador += pArray[i];
			contador++;
		}
		*pPromedio = acumulador/(float)contador;

	ret = 1;
	}


	return ret;
}
/*
 *	\brief permite obtener el minimo y el maximo con su respectivo indice de un solo array de long.
 *	\param pArray direccion de memoria del array
 *	\param size tamaño del array
 *	\param pIMax puntero a la variable donde se guardara el indice mayor
 *	\param pIMin puntero a la variable donde se guardara el indice menor
 *	\param pIntMax puntero a la variable donde se guardara el numero mayor
 *	\param pIntMin puntero a la variable donde se guardara el numero menor
 *	\return 0 si ocurrio un error 1 si se guardaron correctamente.
 *
 * */
int getMinMaxArray (long * pArray,int size, int* pIMax, int* pIMin, long* pIntMax, long* pIntMin)
{
	int ret=0;
	int i;
if(pArray != NULL && size > 0 && pIMax != NULL && pIMin != NULL && pIntMax != NULL && pIntMin != NULL)
{
	for(i=0;i<size;i++)
	{
		if(i==0 || pArray[i] > *pIntMax)
				{
					*pIntMax = pArray[i];
					*pIMax = i;
				}
		if(i==0 || pArray[i] < *pIntMin)
				{
					*pIntMin = pArray[i];
					*pIMin = i;
				}
	}
	ret = 1;
}
	return ret;
}
/*
 *
 * \brief funcion para ordenar un array INT
 *
 *
 *
 * */
int ordenar(long* pArrayEdad,int size)
{
	int i;
	int buffer;
	int flag=1;
	int ret = -1;

	if(pArrayEdad != NULL && size > 0  ) //se verifican que los valores de los arrya sno sean nulos
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
int imprimirArrayInt (long* pArray, int size)
{
	int i;
	int ret =-1;
	if(pArray != NULL && size>0)
	{
		for(i=0 ; i<size ; i++)
		{
			printf("El indice [%d] tiene como edad %ld \n",i,pArray[i]);
		}
		ret = 0;
	}
	return ret;

}
/*
 * \brief Se utiliza para sumar 2 variables
 * \param	dos variables enteras
 * \return la suma de las mismas
 * */
int Sumar (long x, long y, long* pResultado){
	int r=0;
	if(pResultado != NULL)
	{
		*pResultado = x + y;
		r=1;
	}
	return r;
}

/*
 * \brief Se utiliza para restar 2 variables
 * \param dos variables enteras
 * \return la resta de las mismas
 * */

int Restar (long x, long y, long* pResultado){
	int r=0;
	if(pResultado != NULL)
	{
	*pResultado  = x - y;
	r=1;
	}
	return r;
}

/*
 * \brief Se utiliza para dividir 2 variables
 * \param dos variables enteras
 * \return la division de las mismas
 * */

int Dividir (long x, long y, float* pResultado){
	float r=0;
	if(y!=0 && pResultado!=NULL){
		*pResultado = (float)x / y;
		r=1;
	}
	return r;
}

/*
 * \brief Se utiliza para multiplicar 2 variables
 * \param dos variables enteras
 * \return el producto de las mismas
 * */

int Multiplicar (long x, long y, long* pResultado)
{
	int r=0;
	if(pResultado != NULL)
	{
	*pResultado = x * y;
	r=1;
	}
	return r;
}

/*
 * \brief Se utiliza para sacar el factorial de 2 variables
 * \param dos variables enteras
 * \return el factorial de las mismas
 * */

int Factorial (long x, double* pResultado)
{
	int r = -1;
	double buffer;
	int i;
	if(pResultado != NULL)
	{
	for(i = 1; i<=x;i++)
	{
		if(i==1){
		buffer = i *(i);
		continue;
		}

		buffer = buffer *(i);

	}
	*pResultado = buffer;
	r=1;
	}
	return r;
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
			if (i == 0 && cadena[i] == '-') { //se acepta el - de los negativos
				continue;
			}
			if(cadena[i]>='0' && cadena[i] <='9'){ //solo número
				continue;
			}
			if ((cadena[i] <= '~' && cadena[i] >= ':')|| (cadena[i]<='/' && cadena[i]>='!')) //lo que hice fue poner todos los caracteres de la tabla ASCII como invalidos
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
int getInt(long *pResultado) {
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

int getNumber(long *pResultado, char *mensaje, char *mensajeError, long min,
		long max, int reintentos) {
	int ret=0;
	long num;
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



