/*Agregar al programa adjunto la funcionalidad resaltada con un (*)

- Limpie la pantalla
- Solicite dos valores numéricos al usuario distintos de cero *
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
- Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
- Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;
	setbuf(stdout, NULL);
	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	while(a==0){
		printf("\nNumero incorrecto, Ingrese nuevamente el primer numero: ");
		scanf("%d",&a);
	}
	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);
	while(b==0){
		printf("\nNumero incorrecto, Ingrese nuevamente el segundo numero: ");
		scanf("%d",&b);
	}
	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado<0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
