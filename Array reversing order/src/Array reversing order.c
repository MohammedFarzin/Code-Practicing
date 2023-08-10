/*
 ============================================================================
 Name        : Array.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,size,arr[100];

	setbuf(stdout, NULL);
	printf("Enter the size of array");
	scanf("%d", &size);

	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	printf("Reversed pattern");
	for(i=size-1; i>=0; i--){
		printf("%d", arr[i]);
	}
	return EXIT_SUCCESS;
}
