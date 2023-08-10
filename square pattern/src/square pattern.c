/*
 ============================================================================
 Name        : square.c
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
	printf("Enter a number to show the number of  rows");
	scanf("%d", &input);

	for(rows=1; rows<=input; rows++){
		for(columns=1; columns<=input; columns++){
			printf("* ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
