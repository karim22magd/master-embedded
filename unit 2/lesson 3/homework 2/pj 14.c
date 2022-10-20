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
	int num , count , factorial=1;
	printf(" enter a positive number  : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d ", &num);
	 if (num<0)
	    	 {
	    		 printf("factorial doesn't exist");
	    	 }
	 else
	 {
		 for (count=1;count<=num;++count)
		      {
		     	 factorial*=count;   // factorial=factorial*count
		      }
		     	 printf(" factorial is %d ", factorial );

	 }
         return 0;
}
