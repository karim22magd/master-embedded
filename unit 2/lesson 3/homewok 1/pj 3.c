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
int main ( int argc,char **argv )
{
	int a,b;
	printf(" enter the two numbers : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d  %d ", &a,&b );
	printf(" sum = %d ", a+b );
}

