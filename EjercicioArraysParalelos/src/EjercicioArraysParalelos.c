/*
 ============================================================================
 Name        : EjercicioArraysParalelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main() {
	setbuf(stdout, NULL);
	int legajo[MAX_ARRAY];
	int busquedaEstudiante;
	char apellido [MAX_ARRAY][50];
	char sexo[MAX_ARRAY][50];
	int edad[MAX_ARRAY];
	int nota1[MAX_ARRAY];
	int nota2[MAX_ARRAY];
	float promedio[MAX_ARRAY];
	int option;

	while(option!=6)
	{
		getNumber(&option,"Qué desea hacer?\n1-Inicializar arrays\n2-Cargar arrays\n3-Mostrar 1 estudiante\n4-Mostrar todos los estudiantes\5-Ordenar por criterio\6-Salir","ERROR,opción incorrecta",1,6,2);
		switch(option)
		{
		case 1:
			initArrayInt(legajo,MAX_ARRAY,0);
			initArrayInt(edad,MAX_ARRAY,0);
			initArrayInt(nota1,MAX_ARRAY,0);
			initArrayInt(nota2,MAX_ARRAY,0);
			initArrayFloat(promedio,MAX_ARRAY,0);
			break;
		case 2:
			cargarDatos(legajo,apellido,sexo,edad,nota1,nota2,promedio,MAX_ARRAY);
			break;
		case 3:
			getNumber(&busquedaEstudiante,"Ingrese el numero de legajo\n","ERROR, legajo incorrecto\n",0,MAX_ARRAY,2);
			mostrar1Estudiante(legajo,apellido,sexo,edad,nota1,nota2,promedio,MAX_ARRAY,busquedaEstudiante);
			break;
		case 4:
			mostrarEstudiantes(legajo,apellido,sexo,edad,nota1,nota2,promedio,MAX_ARRAY);
			break;
		case 5:
			ordenarLegajoEstudiantes(legajo,apellido,sexo,edad,nota1,nota2,promedio,MAX_ARRAY);
			break;
		case 6:
			break;
		}





	}


	return 0;
}
