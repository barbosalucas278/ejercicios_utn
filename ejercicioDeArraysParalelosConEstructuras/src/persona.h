/*
 * persona.h
 *
 *  Created on: 25 abr. 2020
 *      Author: pocho
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string.h>

#endif /* PERSONA_H_ */


typedef struct{
	int legajo;
	char apellido[50];
	char sexo[10];
	int edad;
	int nota1;
	int nota2;
	float promedio;
}ePersona;

/*
 *\brief ordena por criterio establecido
 *
 * */

int oredenarPorCriterio (ePersona* pAlumno, int len, int option);
/*
 *
 * \brief imprime todo un array
 *
 * */
void printAlumnos(ePersona* pAlumno, int len);

/*
 * \brief Crea un menu con opciones
 * */
int menu(ePersona* pAlumno,int option);
/*
 *\brief se utiliza para cargar un array de enteros
 *\param *pArray array de INT
 *\param size tamaño del array
 *\param indice valor del indice que quiero cargar
 *\return 0 si no pudo cargarlo 1 si pudo cargarlo
 */
void cargarAlumno (ePersona* pAlumno,int len);
/*
 * \brief muestra 1 alumno dle array
 *
 * */
void print1Alumno(ePersona* pAlumno,int len);
