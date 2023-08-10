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
	int rows,columns;

	for(rows=1; rows<=5; rows++){
		for(columns=1; columns<=rows; columns++){
			printf("%d", columns);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
