/*
 ============================================================================
 Name        : adicional1.c
 Author      : 
 Version     :
 Description : Ingresar 5 numeros y calcular su media.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int num;
	int acumulador = 0;
	int i;
	float media;
	for(i=0;i<5;i++){
		printf("Ingrese un número");
		scanf(" %d",&num);
		acumulador+=num;
	}
	media=(float)acumulador/i;
	printf("La media de los 5 numeros es: %.02f",media);
	return 0;

}
