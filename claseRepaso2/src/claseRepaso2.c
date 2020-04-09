/*
 ============================================================================
a. Cantidad de n�meros positivos.
b. Cantidad de n�meros negativos.
c. Promedio de n�meros.
d. De los positivos el m�ximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "repaso2.h"

int main() {
	setbuf(stdout, NULL);
	fflush(stdin);
	int cont=0;
	int contPos=0;
	int contNeg=0;
	int acumulador=0;
	int maxPos;
	float promedio;
	int n;
	int respuesta =1;
	do{
		fflush(stdin);
		getNumero(&n,"Ingrese un n�mero\n","Error, n�mero invalido\n",-100,100);
		acumulador += n;
		if(esPositivo(n)){
			contPos++;
		}
		else
		{
			contNeg++;
		}
		if(cont==0 || n>maxPos)
		{
			maxPos=n;
		}
		cont++;
		printf("Elija una opcion\n1- continuar\n2- terminar");
		fflush(stdin);
		scanf("%d",&respuesta);

	}while(respuesta==1);
	promedio = promediarNumeros(acumulador,cont);
	printf("a. Cantidad de n�meros positivos : %d \n",contPos);
	printf("b. Cantidad de n�meros negativos : %d \n",contNeg);
	printf("c. Promedio de los n�meros : %.2f",promedio);
	printf("\nd. El m�ximo positivo : %d \n",maxPos);

	return 0;
}
