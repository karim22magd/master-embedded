/*
 ============================================================================
 Name        : 000000.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[30],element,num,i;


		printf("\n enter number of elements :");
		scanf("%d",&num);

		printf("\n enter the values : ");
		for(i=0;i<num;i++){
			scanf("%d",&arr[i]);
		}


		printf("\n enter the element to be searched :");
		scanf("%d",&element);

		i=0;
		while(i<num && element!=arr[i]){
			i++;
		}

		if(i<num){
			printf("number found at the location = %d", i+1);
		}else{
			printf("number not found ");
		}


		return 0;

}
