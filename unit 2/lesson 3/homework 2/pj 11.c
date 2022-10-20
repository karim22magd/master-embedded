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
	int num;
	printf(" enter a number to check : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d ", &num);
     if (num>=0)
     {
    	 printf(" %d is positive ", num );
     }
     else
     {
    	 printf(" %d is negative ", num );
     }
     return 0;
}
