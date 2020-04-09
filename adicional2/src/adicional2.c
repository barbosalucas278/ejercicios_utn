/*
 ============================================================================
 Name        : adicional2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Escribir el programa necesario para calcular la suma de dos números. Mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int num1,num2, res;
	printf("Ingrese el primer número");
	scanf("%d",&num1);
	printf("Ingrese el segundo número");
	scanf("%d",&num2);
	res=num1+num2;
	printf("_____________________________\n");
	printf("El resultado es: %d",res);
	return 0;

}
