/*
 ============================================================================
diseñar un programa que calcule la superficie de un triangulo a partir del ingreso de su base y altura y muestre el ressultado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	float base,altura,superficie;
	do{
	printf("Ingrese la base del triangulo");
	scanf("%f",&base);
	}while(base==0);
	do{
		printf("Ingrese la altura del triangulo");
		scanf("%f",&altura);
	}while(altura==0);

	superficie=(base*altura)/2;
	printf("________________________\n");
	printf("La sueprficie del triangulo es: %0.2f",superficie);
	return 0;
}
