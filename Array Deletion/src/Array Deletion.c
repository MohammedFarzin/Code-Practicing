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
	int i,size,position,arr[100];
	 setbuf(stdout, NULL);
	printf("Enter the size of array");
	scanf("%d", &size);

	printf("Enter the elements of the array");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter the position of the element");
	scanf("%d", &position);

	if(position>=size+1){
		printf("Invalid Number");
	}else{
		for(i=position-1; i<size-1; i++){
			arr[i]=arr[i+1];
		}

		for(i=0; i<size-1; i++){
			printf("%d", arr[i] );

	}
	}
	return EXIT_SUCCESS;
}
