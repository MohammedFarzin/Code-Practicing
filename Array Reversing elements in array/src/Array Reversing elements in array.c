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

	int i,j,size,arr[100],temp;

	setbuf(stdout, NULL);
		printf("Enter the size of array");
		scanf("%d", &size);

		for(i=0; i<size; i++){
			scanf("%d", &arr[i]);
		}

		for(i=0,j=size-1; i<size/2; i++,j--){
			temp = arr[i];
			arr[i]= arr[j];
			arr[j] = temp;
		}

		printf("The values after the reversal of elements in the array");
		for(i=0; i<size; i++){
			printf("%d", arr[i]);
		}
	return EXIT_SUCCESS;
}
