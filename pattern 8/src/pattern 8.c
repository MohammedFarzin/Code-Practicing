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
	char p;
	for(i=1,p='A'; i<=n; i++,p+=2){
		for(j=1; j<=i; j++){

			printf("%c", (char)p+"");

		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
