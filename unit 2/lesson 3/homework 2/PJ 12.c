/*
 ============================================================================
 Name        : PJ.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main (int argc,char **argv)
{
	char k;
	printf(" enter a character to check : " );
	fflush(stdin);fflush(stdout);
	scanf(" %c ", &k );
	if ( k>='a'&& k<='z' || k>='A'&& k<='Z' )
     {
    	 printf(" %c is alphabet ", k );
     }
     else
     {
    	 printf(" %c is not alphabet ", k );
     }
     return 0;
}
