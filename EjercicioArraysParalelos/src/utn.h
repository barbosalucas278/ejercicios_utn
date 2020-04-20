/*
 * utn.h
 *
 *  Created on: 11 abr. 2020
 *      Author: pocho
 */

#ifndef UTN_H_
#define UTN_H_
#define MAX_ARRAY 10


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
int initArrayChar(char* pArray, int size, int pIni);
int cargarArray (int* pLegajo ,int sizeLegajo ,char* pApellido ,int sizeApellido,int* pArrayEdades,int sizeEdades ,char* pSexo,int sizeSexo,int* pNota1,int sizeNota1,int* pNota2,int sizeNota2 ,float* pArrayPromedio,int sizePromedio);
int cargarArrayInt (int* pArray,int size);
int printArrayStr (char* pArray, int size);
int printArrayInt (int* pArray, int size);
int printArrayFloat(float *pArrayFloat, int sizeFloat);
int printArrayIntFloat(int *pArray, int size, float *pArrayFloat, int sizeFloat);
int ordenarArrayInt_2(int* pArrayEdad,int* pArraySalario,int size);
int ordenarArrayIntFloat(int *pArrayInt, float *pArrayFloat, int size);
int promedioArray (int* pArray,int size,int* pArray2, int size2,float* pPromedio);


