/*
 * utn.h
 *
 *  Created on: 11 abr. 2020
 *      Author: pocho
 */

#ifndef UTN_H_
#define UTN_H_
#define MAX_ARRAY 2
#define MAX_ARRAY_CHAR 50


#endif /* UTN_H_ */
/*					FLOAT					*/
int getNumberDecimal(float* pResultado, char* mensaje, char* mensajeError, int min,int max, int reintentos);
/*					INT					*/
int getNumber (int* pResultado, char* mensaje, char* mensajeError, int min, int max, int reintentos);
/*					CHARS	y	STRINGS			*/
int getChar (char* pResutlado, char* mensaje, char* mensajeError, char min, char max, int reintentos);
int getString (char* cadena, char* mensaje, char* mensajeError, int len, int reintentos);
/*                inicializar ARRAYS					*/
int initArrayInt(int* pArray, int size, int pValor);
int initArrayFloat(float* pArray, int size, float pValor);
/*					cargar ARRAYS				*/
int cargarArrayEdad (int* pArray,int size,int indice);
int cargarArrayNota (int* pArray,int size,int indice);
/*					mostrar arrays				*/
int printArrayStr (char* pArray, int size);
int printArrayInt (int* pArray, int size);
int printArrayFloat(float *pArrayFloat, int sizeFloat);
int printArrayIntFloat(int *pArray, int size, float *pArrayFloat, int sizeFloat);
/*					ordenar arrays				*/
int ordenarArrayInt_2(int* pArrayEdad,int* pArraySalario,int size);
int ordenarArrayIntFloat(int *pArrayInt, float *pArrayFloat, int size);
/*					funciones con array			*/
int promedioArray (int* pArray,int size,int* pArray2, int size2,float* pPromedio);

/*			funciones ejercicio 			*/


int cargarDatos(int* pLegajo,char pApellido[][50],char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len);
int mostrarEstudiantes(int* pLegajo,char pApellido[][50] ,char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len);
int ordenarLegajoEstudiantes(int* pLegajo,char pApellido[][50],char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len);
int mostrar1Estudiante(int* pLegajo,char pApellido[][50] ,char pSexo[][50],int* pEdad,int* pNota1, int* pNota2, float* pPromedio, int len,int pIndice);












