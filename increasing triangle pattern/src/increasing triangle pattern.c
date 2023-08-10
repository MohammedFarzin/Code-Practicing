/*
 ============================================================================
 Name        : increasing.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,rows,columns;

	setbuf(stdout, NULL);
	printf("Enter a number to show number of rows");
	scanf("%d", &input);
	printf("\n");

	for(rows=1; rows<=input; rows++){
		for(columns=rows; columns<=input; columns++){
			printf("*");
		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
