/*
 ============================================================================
 Name        : ejercicioDeArraysParalelosConEstructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int option;
	ePersona alumno[LEN_ARRAY];

	option = optionMenu("Qué desea hacer?\n1-Cargar arrays\n2-Mostrar 1 estudiante\n3-Mostrar todos los estudiantes\n4-Ordenar por criterio\n5-Salir\n","ERROR,opción incorrecta",1,5,2);
	while(menu(alumno,option)==0){
		option = optionMenu("Qué desea hacer?\n1-Cargar arrays\n2-Mostrar 1 estudiante\n3-Mostrar todos los estudiantes\n4-Ordenar por criterio\n5-Salir\n","ERROR,opción incorrecta",1,5,2);
	}

	return 0;
}
