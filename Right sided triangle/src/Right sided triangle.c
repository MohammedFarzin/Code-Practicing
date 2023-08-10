/*
 ============================================================================
 Name        : Right.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,rows,columns,columns1;

	setbuf(stdout, NULL);
	printf("Enter a number to show number of rows");
	scanf("%d", &input);
	printf("\n");

	for(rows=1; rows<=input; rows++){
		for(columns=1; columns<=rows; columns++){
			printf("  ");

		}
		for(columns1=rows; columns1<=input; columns1++){
			printf("* ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
