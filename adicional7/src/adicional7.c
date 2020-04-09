/*
 ============================================================================
diseñar un programa que calcule la longitud de la circunferencia (C = πd, siendo "C" la circunferencia, "d" el diámetro y π 3,14)de un triangulo y
el area del circulo de radio dado (π * r²)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//M_PI <------------constante de pi.
int main() {
	setbuf(stdout,NULL);
	float diametro;
	float circunferencia;
	float radio;
	float area;
	do{
		printf("Ingrese el diametro del triangulo:\n");
		scanf("%f",&diametro);
	}while(diametro==0);
	do{
		printf("Ingrese el radio del circulo:\n");
		scanf("%f",&radio);
	}while(radio==0);

	circunferencia=M_PI * diametro;
	area=M_PI * (radio*radio);
	printf("_________________________\n");
	printf("La circunferencia del triangulo es de: %0.2f",circunferencia);
	printf("\nEl area del circulo es de: %0.2f",area);

	return 0;
}
