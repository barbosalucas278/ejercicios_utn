/*
 ============================================================================

Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.

 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

int main() {
	float promedio;
	int acumulador=0;
	int num;
	int max;
	int min;
	//int max = INT_MIN; //CONSTANTE DEFINIDA EN limits.h INT_MIN = -32768
	//int min = INT_MAX; //CONSTANTE DEFINIDA EN limits.h INT_MAX = 32768
	setbuf(stdout, NULL);
	printf("Ingrese un número\n");
	scanf("%d",&num);
	max = num;
	min = num;
	for(int i=0;i<4;i++){
		printf("Ingrese un número");
		scanf("%d",&num);
		acumulador += num;
		if(num>max){
			max = num;
		}
		if(num<min){
			min = num;
		}
	}
	promedio = acumulador / 5;
	printf("El promedio de los numero es: %.2f",promedio);
	printf("\n____________________________________________\n");
	printf("El valor minimo es: %d",min);
	printf("\n____________________________________________\n");
	printf("El valor maximo es: %d",max);

	return 0;
}
