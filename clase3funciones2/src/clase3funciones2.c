/*
 ============================================================================
 Name        : clase3funciones2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float sacarArea (float a);

int main() {
	setbuf(stdout, NULL);
	float radio;
	float resultado;
	printf("Ingrese el radio\n");
	scanf("%f",&radio);
	resultado = sacarArea(radio);
	printf("\nEl area del circulo es %0.2f",resultado);
	return 0;
}

float sacarArea (float a){
	float area;
	float pi = 3.14;
	area=pi * (a*a);
	return area;
}
