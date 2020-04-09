/*
 ============================================================================
 Name        : ejemplo2Clase1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int b;
int c;
float div;
float dec;
//int res;
setbuf(stdout, NULL);

a=5;
b=2;

dec= 2.8;
c=dec; //se puede guardar una variable float en una int para que
		//sea tomada solamente la parte entera como un int

printf("la variable c %d", c);

div=a/(float)b;  //se declara que una de las variables debe ser tomada como un float,
				//independientemente de que esten declaradas como int

printf("\n la variable div %.2f", div);

return 0;
}
