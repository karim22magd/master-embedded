/*
 ============================================================================
 Name        : arrayy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[10],average,sum=0;
	int i,n;
		printf (" enter the number of data : ");
		scanf (" %d ",&n);
		for (i=0;i<n;i++){
			printf (" enter n%d : ", i+1);
			scanf (" %d ",&num[i]);
			sum=sum+num[i];
		}
		average = sum/n ;
		printf (" average = %d ",average);
		return 0;
}
