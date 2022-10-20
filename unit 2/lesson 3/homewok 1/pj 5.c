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
	char G = 'a' ;
	//G implicitly converted to int . Ascii value of 'G' is 97

	printf(" enter the character : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d " , &G );
	printf(" Ascii value is %d ", G );
	return 0 ;

}
