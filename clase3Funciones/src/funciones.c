/*
 * funciones.c
 *
 *  Created on: 1 abr. 2020
 *      Author: pocho
 */
#include <stdio.h>
#include <stdlib.h>

/*
 *\brief Solicita un número al usuario
 *\param a es el número ingresado.
 *\return un mensaje con el numero ingresado
*/

void mostrarNumero (){
	int a;
	scanf("%d",&a);
	printf("Su numero es %d", a);
}
