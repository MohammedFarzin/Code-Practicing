/*
 ============================================================================
 Name        : pattern.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=5;

	for(i=1; i<=n; i++){
		int p='A';
		for(j=i; j<=n; j++){
			printf("  ");
		}

		for(j=1; j<i; j++){
					printf("%c", (char)p++ +"");
				}
		for(j=1; j<=i; j++){
					printf("%c", (char)p++ +"");
				}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
