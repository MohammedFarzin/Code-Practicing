/*
 ============================================================================
 Name        : Star.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,row,col;

	setbuf(stdout, NULL);
	printf("Enter the number of rows");
	scanf("%d", &input);

	for(row=input; row>=1; row--){
		for(col=1; col<=row; col++){
			printf("%c", col+64);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
