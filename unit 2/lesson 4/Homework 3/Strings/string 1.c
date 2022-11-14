/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,count=0;
	char c[100],cr;
	printf("enter a string: ");
	gets(c);

	printf("\n enter a character to find frequency: ");
	scanf("%c",&cr);
	for(i=0;c[i]!='\0';i++){

		if(cr==c[i]){
			count=count+1;
		}
	}

	printf("frequency of %c is %d ",cr,count);
	return 0;
}
