/*
 * persona.c
 *
 *  Created on: 25 abr. 2020
 *      Author: pocho
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "persona.h"

int menu(ePersona* pAlumno, int option)
{
	int ret =0;
	int option4;

		switch(option)
		{
		case 1:
			cargarAlumno(pAlumno,LEN_ARRAY);
			ret=0;
			break;
		case 2:
			print1Alumno(pAlumno,LEN_ARRAY);
			ret=0;
			break;
		case 3:
			printAlumnos(pAlumno, LEN_ARRAY);
			ret=0;
			break;
		case 4:
			option4 = optionMenu("1- Ordenar por apellido\n2- Ordenar por promedio\n3- Ordenar por legajo\n4- Volver atras","ERROR",1,4,2);
			if(oredenarPorCriterio (pAlumno,LEN_ARRAY,option4))
			{
				printAlumnos(pAlumno, LEN_ARRAY);
				option4 = optionMenu("1- Ordenar por apellido\n2- Ordenar por promedio\n3- Ordenar por legajo\n4- Volver atras","ERROR",1,4,2);
			}
			else{
				printf("No se pudo ordenar\n");
			}

			ret=0;
			break;
		case 5:
			ret=1;
			break;
		}
	return ret;
}

void cargarAlumno (ePersona* pAlumno,int len)
{
	int bufferLegajo;
	char bufferApellido[50];
	char bufferSexo[10];
	int bufferEdad;
	int bufferNota1;
	int bufferNota2;
	float bufferPromedio;
	int i;

	if(pAlumno != NULL && len >0)
	{

		for(i=0;i<len;i++){
			bufferLegajo = i + 1 ;
			pAlumno[i].legajo = bufferLegajo ;
			getString(bufferApellido,"ingrese el nombre","ERROR",50,2);
			strncpy(pAlumno[i].apellido,bufferApellido,50);
			getString(bufferSexo,"ingrese el sexo","ERROR",10,2);
			strncpy(pAlumno[i].sexo,bufferSexo,10);
			getNumber(&bufferEdad,"Ingrese la edad","ERROR",1,115,2);
			pAlumno[i].edad = bufferEdad;
			getNumber(&bufferNota1,"Ingrese la primer nota","ERROR",1,10,2);
			pAlumno[i].nota1 = bufferNota1;
			getNumber(&bufferNota2,"Ingrese la segunda nota","ERROR",1,10,2);
			pAlumno[i].nota2 = bufferNota2;
			bufferPromedio = (float)bufferNota1 + bufferNota2 / 2;
			pAlumno[i].promedio = bufferPromedio;
		}

	}

}

void print1Alumno(ePersona* pAlumno,int len)
{
	int i;
	int indice;
	getNumber(&indice,"ingrese el indice","ERROR, indice invalido",1,LEN_ARRAY,2);
	printf("indice buscado :%d\n",indice);
	if(pAlumno!= NULL && len >0)
	{
		for(i=0;i<len;i++){
			if(pAlumno[i].legajo == indice){
				printf("Legajo:  %d  Apellido:  %s  Sexo:  %s  1°Nota:  %d  2°Nota:  %d  Promedio:  %.2f \n",pAlumno[i].legajo,pAlumno[i].apellido,pAlumno[i].sexo,pAlumno[i].nota1,pAlumno[i].nota2,pAlumno[i].promedio);

			}

		}

	}

}

void printAlumnos(ePersona* pAlumno, int len){

	int i;
	if(pAlumno!= NULL && len >0)
	{
		for(i=0;i<len;i++){

			printf("Legajo:  %d  Apellido:  %s  Sexo:  %s  1°Nota:  %d  2°Nota:  %d  Promedio:  %.2f \n",pAlumno[i].legajo,pAlumno[i].apellido,pAlumno[i].sexo,pAlumno[i].nota1,pAlumno[i].nota2,pAlumno[i].promedio);

		}
	}


}

int oredenarPorCriterio (ePersona* pAlumno, int len, int option){
	int ret=0;
	int flagDesordenado=1;
	int i;
	ePersona bufferAlumno;

		switch(option){
		case 1: //ordenar por apellido
			do{
				flagDesordenado=0;
				for(i=0;i<len-1;i++)
				{
					if(strcmp(pAlumno[i].apellido,pAlumno[i+1].apellido)>0){
						bufferAlumno= pAlumno[i+1];
						pAlumno[i+1]=pAlumno[i];
						pAlumno[i]=bufferAlumno;
						flagDesordenado=1;
					}
				}
				len--;
			}while(flagDesordenado);
			ret=1;
			break;
		case 2://por promedio
			do{
				flagDesordenado=0;
				for(i=0;i<len-1;i++)
				{
					if(pAlumno[i].promedio > pAlumno[i+1].promedio){
						bufferAlumno= pAlumno[i+1];
						pAlumno[i+1]=pAlumno[i];
						pAlumno[i]=bufferAlumno;
						flagDesordenado=1;
					}
				}
				len--;
			}while(flagDesordenado);
			ret=1;
			break;
		case 3:
			do{
				flagDesordenado=0;
				for(i=0;i<len-1;i++)
				{
					if(pAlumno[i].legajo > pAlumno[i+1].legajo){
						bufferAlumno= pAlumno[i+1];
						pAlumno[i+1]=pAlumno[i];
						pAlumno[i]=bufferAlumno;
						flagDesordenado=1;
					}
				}
				len--;
			}while(flagDesordenado);
			ret=1;
			break;
		case 4:
			ret=0;
			break;
		}
	return ret;
}
