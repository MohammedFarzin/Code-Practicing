/*
 ============================================================================
 Name        : mocking.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;

	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("  ");
		}
		for( j=i,n=1; j<=5; j++,n++){
						printf("%d  ", i*n);

		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
