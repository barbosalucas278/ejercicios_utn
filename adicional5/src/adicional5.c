/*
 ============================================================================
escribir un programa necesario para calcular y mostrar el cuadrado de un numero.
el numero debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero."
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int a,cuadrado;
	do{
		printf("Ingrese un número");
		scanf("%d",&a);
		if(a<=0){
			printf("ERROR, el número debe ser mayor que cero. ");
		}
	}while(a<=0);
	cuadrado=a*a;
	printf("El cuadrado de %d es %d",a,cuadrado);
	return 0;
}
