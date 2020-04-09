/*
 ============================================================================
 Name        : adicional11.c
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
	for(i=1;i<101;++i)
	{
		if(i % 2 == 0)
			{
			printf("%d \n",i);
			}
	}
	return 0;
}
