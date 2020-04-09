/*
 ============================================================================
 Name        : adicional15.c
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
	for(i=0;i<=100;i++)
	{
		if(i%6==0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}
