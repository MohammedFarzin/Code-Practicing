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
	int input,first,array[100],sum=0;
	setbuf(stdout, NULL);
	printf("Enter the size of array");
	scanf("%d", &input);

	printf("Enter the values of array");
	for(first=0; first<input; first++){
		scanf("%d", &array[first]);
	}

	for(first=0; first<input; first++){
		if(array[first]%2==0){
			sum=sum+1;
		}
	}

	printf("Number of even numbers in the given array is %d", sum);
	return EXIT_SUCCESS;
}
