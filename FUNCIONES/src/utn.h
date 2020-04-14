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
#define MAX_ARRAY_CHAR 4068


#endif /* UTN_H_ */
/*					FLOAT					*/
int getNumberDecimal(float* pResultado, char* mensaje, char* mensajeError, int min,int max, int reintentos);
int getFloat (float* pResultado);
int isDecimalNumber (char* cadena);
/*					INT					*/
int getNumber (int* pResultado, char* mensaje, char* mensajeError, int min, int max, int reintentos);
int getInt (int* pResultado);
int isNumber (char* cadena);
/*                 ARRAYS					*/
int printArrayInt (int* pArray, int size);
int ordenar(int* pArrayEdad,int* pArraySalario,int size);
/*					CHARS	y	STRINGS			*/
int getChar (char* pResutlado, char* mensaje, char* mensajeError, char min, char max, int reintentos);
int getString (char* cadena, char* mensaje, char* mensajeError, int len, int reintentos);
int isChar (char* cadena);
