/*
 ============================================================================
 Name        : Mock.c
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
		for(j=1; j<i; j++){
			printf("%d", j);
		}
		printf("\n");
	}

	for(i=5; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
