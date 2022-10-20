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
	int num , count , sum=0;
	printf(" enter a positive number  : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d ", &num);
     for (count=1;count<=num;++count)
     {
    	 sum+=count;
     }

    	 printf(" sum is %d ", sum );
         return 0;
}
