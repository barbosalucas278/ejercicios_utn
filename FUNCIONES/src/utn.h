/*
 * utn.h
 *
 *  Created on: 11 abr. 2020
 *      Author: pocho
 */

#ifndef UTN_H_
#define UTN_H_
#define MIN -32768
#define MAX 32768
#define MAX_ARRAY_CHAR 4096


#endif /* UTN_H_ */
/*					FLOAT					*/
int getNumberDecimal(float* pResultado, char* mensaje, char* mensajeError, int min,int max, int reintentos);
/*					INT					*/
int getNumber (int* pResultado, char* mensaje, char* mensajeError, int min, int max, int reintentos);
/*					CHARS	y	STRINGS			*/
int getChar (char* pResutlado, char* mensaje, char* mensajeError, char min, char max, int reintentos);
int getString (char* cadena, char* mensaje, char* mensajeError, int len, int reintentos);
/*                 ARRAYS					*/
int initArrayInt(int* pArray, int size, int pValor);
int initArrayFloat(float* pArray, int size, float pValor);
int cargarArrayIntFloat (float* pArrayNotas,int sizeNotas, int* pArrayEdades, int sizeEdades);
int cargarArrayInt (int* pArray,int size);
int printArrayInt (int* pArray, int size);
int printArrayIntFloat(int *pArray, int size, float *pArrayFloat, int sizeFloat);
int ordenarArrayInt_2(int* pArrayEdad,int* pArraySalario,int size);
int ordenarArrayIntFloat(int *pArrayInt, float *pArrayFloat, int size);


