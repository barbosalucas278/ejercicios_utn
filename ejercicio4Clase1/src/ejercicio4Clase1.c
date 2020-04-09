/*
Escribir un programa que realice las siguientes acciones:

- Solicite al usuario 10 números
- Calcule cuántos son negativos y cuantos son positivos
- Muestre por pantalla la cantidad de negativos y la cantidad de positivos

 */

#include <stdio.h>
#include <stdlib.h>
int main (){
	setbuf(stdout, NULL);
	int contNeg=0;
	int contPos=0;
	int num;
	int i=0;
	for(i=0;i<10;i++){
		printf("Ingrese un número");
		scanf("%d",&num);
		if(num<0){
			contNeg++;
		}
		if(num>=0){
			contPos++;
		}
	}
	printf("__________________________\n");
		printf("La cantidad de número positivos es de : %d",contPos);
		printf("\nLa cantidad de números negativos es de : %d ", contNeg);
		printf("/\n__________________________");
	return 0;
}

