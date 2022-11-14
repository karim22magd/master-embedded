/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r,c;
		int a[2][2];
		int b[2][2];
		int s[2][2];

		for (r=0;r<2;r++){
			for (c=0;c<2;c++){
				printf ("enter the item (%d,%d) :", r,c);
				fflush (stdout);fflush (stdin);
				scanf (" %d ", &a[r][c]);
			}
	    }
		printf (" \n the first matrix is \n ");
		for (r=0;r<2;r++){
			for (c=0;c<2;c++){
				printf (" %d \t ", a[r][c]);

			}
			printf (" \r\n ");
		}
		for (r=0;r<2;r++){
					for (c=0;c<2;c++){
						printf ("enter the item (%d,%d) :", r,c);
						fflush (stdout);fflush (stdin);
						scanf (" %d ", &b[r][c]);
					}
			    }
				printf (" \n the second matrix is \n ");
				for (r=0;r<2;r++){
					for (c=0;c<2;c++){
						printf (" %d \t ", b[r][c]);

					}
					printf (" \r\n ");
				}
				printf (" \n the new sum of two matrix is \n ");
				for (r=0;r<2;r++){
					for (c=0;c<2;c++){
						s[r][c]=a[r][c]+b[r][c];
					}
				}
				for (r=0;r<2;r++){
					for (c=0;c<2;c++){
						printf (" %d \t ",s[r][c]);
					}
					printf (" \r\n ");
				}


		return 0;

}
