/*
 ============================================================================
 Name        : Assignment.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,row,result;
	setbuf(stdout, NULL);
	printf("Enter a number");
	scanf("%d", &input);

	for(row=1; row<=10; row++){
		result = input*row;
		printf("%d * %d = %d\n", row, input, result);

	}
	return EXIT_SUCCESS;
}
