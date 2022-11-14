/*
 ============================================================================
 Name        : ----.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[30];
	int element,num,i,location;

	printf("\n enter number of elements :");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}

	printf("enter the element to be inserted :");
	scanf("%d",&element);

	printf("enter the location :");
	scanf("%d",&location);

	for(i=num;i>=location;i--){
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=element;

	for(i=0;i<num;i++){
		printf("\n %d",arr[i]);
	}

		return 0;


}
