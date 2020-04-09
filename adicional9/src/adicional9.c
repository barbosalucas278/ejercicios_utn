/*
 ============================================================================
escribir un programa que lea por teclado 20 caracteres. luego de la lectura indicar cuantas vocales se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int contarVocales(char *cadena);

int main() {
	setbuf(stdout, NULL);

	char entrada[20];
		printf("Escribe una cadena:\n");
		gets(entrada);
		contarVocales(entrada);
	return 0;
}

//Cuerpo de la función
int contarVocales(char *cadena){
	int a =0;
	int e =0;
	int i =0;
	int o =0;
	int u =0;
	// Recorrer toda la cadena
	for (int indice = 0; cadena[indice] != '\0'; ++indice){

		// Obtener el char de la posición en donde está el índice
		// y por otro lado convertirla a minúscula

		// Así no importa si ponen 'A' o 'a', ambas letras serán convertidas a 'a'
		char letraActual = tolower(cadena[indice]);


		if (letraActual == 'a')
		{
			a++;
		}if(letraActual == 'e'){
			e++;
		}
		if (letraActual =='i'){
			i++;
		}
		if(letraActual == 'o'){
			o++;
		}
		if(letraActual == 'u'){
			u++;
		}
	}
	printf("\nCantidad de a: %d",a);
	printf("\nCantidad de e: %d",e);
	printf("\nCantidad de i: %d",i);
	printf("\nCantidad de o: %d",o);
	printf("\nCantidad de u: %d",u);

	return 0;
}
