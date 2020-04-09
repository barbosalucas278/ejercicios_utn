/*
 ============================================================================
Escribir un programa que realice las siguientes acciones:
* limpiar la pantalla (	setbuf(stdout, NULL);)
* asigne a 2 variables numero1 y numero2 valores distintos de cero.
* efectue el producto de dichas variables.
* muestre el resultado por pantalla.
* obtenga el cuadrado de numero1 y lo muestre por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int producto;
	int cuadrado;
	do{
	printf("Ingrese el primer número");
	scanf("%d",&numero1);
	}while(numero1==0);
	do{
	printf("Ingrese el segundo número");
	scanf("%d",&numero2);
	}while(numero2==0);
	producto =numero1*numero2;
	cuadrado =numero1*numero1;
	printf("______________________\n");
	printf("El producto entre los dos numero es : %d",producto);
	printf("\nEl cuadrado del primer número es: %d",cuadrado);

	return 0;
}
