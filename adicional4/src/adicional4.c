/*
 ============================================================================
escribir un programa que realice las siguientes acciones:
*limpie la pantalla.
*declare 2 variables y les asigne 2 valores.
*realice la resta de dichas variables y muestre por pantalla la leyenda, "resultado positivo", en caso de ser mayor que cero y
 "resultado negativo" en caso de ser menor que cero.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int a,b,res;
	printf("Ingrese el primer número");
	scanf("%d",&a);
	printf("Ingrese el segundo número");
	scanf("%d",&b);
	res = a - b;
	if(res>0){
		printf("Resultado positivo");
	}else {
		printf("Resultado negativo");
	}

	return 0 ;
}
