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
	int i,j;
	char input[100];
	setbuf(stdout, NULL);




	printf("Enter a word");

	scanf("%s", input);


	for(i=0; input[i]!='\0'; i++){
		for(j=0; j<=i; j++){
			printf("%c", input[j]);
		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}
