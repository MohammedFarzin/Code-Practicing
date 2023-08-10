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
	char input;
	setbuf(stdout, NULL);
	printf("Enter a letter: ");
	scanf("%c", &input);

	printf("You entered letter is %c", input);
	return EXIT_SUCCESS;
}
