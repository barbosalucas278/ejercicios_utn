/*
de 10 numero ingresados, indicar cuantos son positivos y cuantos negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int a,i;
	int contPos = 0;
	int contNeg = 0;
	for(i=0;i<10;i++){
		printf("Ingrese un número");
		scanf("%d",&a);
		if(a>=0){
			contPos++;
		}else {
			contNeg++;
		}
	}
	printf("____________________________\n");
	printf("La cantidad de positivos: %d",contPos);
	printf("\nLa cantidad de negativos: %d",contNeg);
	return 0;
}
