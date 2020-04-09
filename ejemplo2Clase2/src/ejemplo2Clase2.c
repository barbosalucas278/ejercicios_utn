/*
 ============================================================================
 Name        : ejemplo2Clase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int num;
	char seguir = 's'; /*<-------- se puede llegar a inicializar o no, porque la comparacion se hace despues de haberla inicializada en el scanf
									es recomendable inicializarla para evitar errores u olvidos .
	 	 	 	 	 	 */
	int acum=0;
	do{
		printf("escriba un n�mero");
		scanf("%d",&num);
		if(num>=0){
			acum+=num;
		}
		printf("�Desea seguir?");
		fflush(stdin);	/*	<-------------- la funci�n del fflush, realiza la limpieza del buffer de entrada (stdin) standar input.
										usualmente quedan almacenados algunos datos en el buffer sobre todo saltos de linea y espacio y se deber�a usar
										antes de cada scanf con el fin de garantizar que el buffer este limpio.*/
		scanf("%c",&seguir);
	}while(seguir=='s');
	printf("\nLa suma de todos los n�meros positivos es : %d",acum);
	return 0;
}
