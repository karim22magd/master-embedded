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
	int a,b;
	printf(" enter a value of number a :  \r\n" );
	printf(" enter a value of number a :  \r\n" );
	fflush(stdin);fflush(stdout);
	scanf(" %d %d ", &a,&b);
	printf(" before swapping,value of a is %d \r\n before swapping,value of b is %d \r\n ", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" after swapping,value of a is %d \r\n after swapping,value of b is %d \r\n ", a,b);
	return 0 ;


}
