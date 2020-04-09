/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL); //es un comando para poder usar la consola del Eclipse
	int num;
	int contador = 0;
	printf("Ingrese un número\n");	//printf se usa cada vez que queremos mostrar un mensaje al usuario. mostrar informacion por pantalla.
	scanf("%d",&num); //scanf poder obtener desde un dispositivo de entrada, la respuesta de lo que nos quiere decir el usuario.

	for(int i=1;i<=num;i++){
		if((num%i)==0){     //numeros divisores
			printf("%d Es divisor de %d \n",i,num);
			contador++;
		}
	}
	printf("La cantidad de numero divisores es: %d",contador);

	return 0;
}
