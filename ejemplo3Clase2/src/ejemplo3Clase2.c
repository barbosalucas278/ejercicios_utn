/*
 ============================================================================
 Name        : ejemplo3Clase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int mes;

	printf("Ingrese el número del mes");
	scanf("%d", &mes);

	switch(mes){
	case 1 :
	case 3 :
	case 4 :
	case 6 :
	case 8 :
	case 12 :
		printf("Tiene 31 dias");
		break;
	case 2 :
		printf("Tiene28 dias");
		break;
	default :
		printf("Tiene 30 dias");
		break;
	}
	return 0;
}
