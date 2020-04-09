/*
 ============================================================================
 Name        : adicional16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdin, NULL);
	int num;
	printf("Ingrese un número:");
	scanf("%d", &num);
	if(num>=0)
	{
		printf("Es positivo");
	}
	return 0;
}

