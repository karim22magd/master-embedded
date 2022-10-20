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
	int a,b,c ;
	printf("enter value of number a : \r\n " );
	printf("enter value of number b : \r\n " );
	fflush(stdin);fflush(stdout);
	scanf(" %d %d ", &a,&b );
	printf(" before swapping,value of a is %d \r\n before swapping,value of b is %d \r\n ", a,b );
	c=a;
	a=b;
	b=c;
	printf(" after swapping,value of a is %d \r\n after swapping,value of b is %d ", a,b );
	return 0 ;

}
