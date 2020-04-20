/*
 * func.h
 *
 *  Created on: 2 abr. 2020
 *      Author: Lucas Barbosa
 */

#ifndef FUNC_H_
#define FUNC_H_
#define MIN -2147483647
#define MAX 2147483647
#define MAX_ARRAY_CHAR 4068
#define CANT_NUMEROS 10

#endif /* FUNC_H_ */


int Sumar (long x, long y, long* pResultado);

int Restar (long x, long y, long* pResultado);

int Dividir (long x, long y, float* pResultado);

int Multiplicar (long x, long y, long* pRestulado);

int Factorial (long x, double* pResultado);

int getNumber (long* pResultado, char* mensaje, char* mensajeError, long min, long max, int reintentos);
int getInt (long* pResultado);
int isNumber (char* cadena);

/*			ARRAY 			*/

int ordenar(long* pArrayEdad,int size);
int imprimirArrayInt (long* pArray, int size);
int getMinMaxArray (long * pArray,int size, int* pIMax, int* pIMin, long* pIntMax, long* pIntMin);
int promedioArrayLong (long* pArray,int size,float* pPromedio);
int buscarEnArray(long* pArray, int size, long pNumero);
int modificarValorArray (long* pArray, int size, long* pIndice);
