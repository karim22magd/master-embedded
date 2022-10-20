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
	int num1,num2;
	char a ;
	printf(" enter an operator either + or - or * or / : " );
	fflush(stdin);fflush(stdout);
	scanf(" %c ", &a);
	printf(" enter two operands : " );
	fflush(stdin);fflush(stdout);
	scanf(" %d %d ", &num1,&num2);
     switch (a) {

     case '+' :
    	 printf(" value is %d : ", num1+num2 );
    	 break;
     case '-' :
    	 printf(" value is %d : ", num1-num2 );
    	 break;
     case '*' :
    	 printf(" value is %d : ", num1*num2 );
    	 break;
     case '/' :
    	 printf(" value is %d : ", num1/num2 );
    	 break;
     default :
    	 printf("error in operator");
    	 break;


     }

}
