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
int main (int argc,char**argv)
{
	int a;
	printf(" enter a number : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d ", &a );
	printf(" value = %d ", a );
	return 0 ;
}
