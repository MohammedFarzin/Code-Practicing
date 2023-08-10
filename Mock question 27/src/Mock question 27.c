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
	int i,j,c;

	for(i=1; i<=5; i++){
		c=1;
		for(j=1; j<=i; j++){
			printf("%d", c);

			c = c*(i-j)/j;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
