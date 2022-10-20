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
	float a,b;
	printf(" enter the two numbers : " );
	fflush(stdout);
	scanf(" %f  %f ", &a,&b );
	printf(" product = %f ", a*b );
	return 0 ;
}

