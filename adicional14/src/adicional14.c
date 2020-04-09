/*
 ============================================================================
 Name        : adicional14.c
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
	setbuf(stdin, NULL);
	int i;
	for(i=0;i<=99;i++)
	{
		printf("%d \n", i);
		i+=2;

	}
	return 0;
}
