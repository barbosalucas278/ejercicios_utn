#include <stdio.h>
#include <stdlib.h>

/*- Limpie la pantalla
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla*/

int main() {

	int num1;
	int num2;
	int result;
	setbuf(stdout, NULL);
	system("CLS()");

	printf("Ingrese el primer numero\n");
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero\n");
	scanf("%d",&num2);

	if(num1<num2){
	result = num2-num1;
	}else {
		result=num1-num2;
	}
	printf("El resultado de la resta de num1 - num2 es: %d",result);


	return 0; //si la funcion no dewvuelve nada, no tiene que tener return.
}
