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
	char a ;
	printf(" enter an alphabet :  \r\n");
    fflush(stdout);
	scanf(" %c ", &a);

	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='u'||a=='U'||a=='o'||a=='O'||a=='i'||a=='I')
	{
		printf(" %c is vowel ", a);
	}
	else
	{
		printf("%c is consonant ", a);
	}

}
