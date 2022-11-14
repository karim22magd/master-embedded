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

int main(void) {

	char name[20]="ronaldo";
	char text ;
	int i,j=0;

	j=strlen(name)-1;

	for(i=0;i<j;i++){
		text=name[i];
		name[i]=name[j];
		name[j]=text;
		j--;
	}
	printf("\n reverse string is: %s",name);


}
