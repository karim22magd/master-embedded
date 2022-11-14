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
	int k,s,r,c;
		int a[10][10];
		int t[10][10];
		printf (" enter number of rows in matrix a : \r\n ");
		fflush (stdout);fflush (stdin);
		scanf (" %d ",&r);
		printf (" enter number of columns in matrix a : \r\n ");
		fflush (stdout);fflush (stdin);
		scanf (" %d ",&c);
		for (k=0;k<r;k++){
			for (s=0;s<c;s++){
				printf (" enter the item (%d,%d) : ", k+1,s+1);
				fflush (stdout);fflush (stdin);
				scanf (" %d ",&a[k][s]);

			}
		}
		printf (" \n the matrix is \n ");
		for (k=0;k<r;k++){
			for (s=0;s<c;s++){
				printf (" %d \t ", a[k][s]);
			}
			printf (" \r\n ");
		}
		for (k=0;k<r;k++){
			for (s=0;s<c;s++){
				t[s][k]=a[k][s];
			}
		}
		printf (" \n the transpose matrix is \n ");
		for (k=0;k<c;k++){
			for (s=0;s<r;s++){
				printf (" %d \t ", t[k][s]);


			}
			printf (" \r\n ");
		}

		return 0;
}
