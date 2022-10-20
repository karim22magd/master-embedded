/*
 ============================================================================
 Name        : pj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main (int argc,char **argv)
{
	int a;
	printf(" enter a number :  \r\n");
	fflush(stdout);
	scanf(" %d ", &a);
	if(a%2==0)
	{

			   printf(" value is even and equal to %d ", a);
	}
			else
			{
			   printf(" value is odd and equal to %d ", a);
			}

}
