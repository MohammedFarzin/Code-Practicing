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

	int limit,i,j,array[100],temp;

	setbuf(stdout, NULL);
	printf("Enter the size of an array");
	scanf("%d", &limit);

	printf("Enter the values of array");
	for(i=0; i<limit; i++){
		scanf("%d", &array[i]);
	}

	for(i=0; i<limit; i++){
		for(j = i+1; j < limit; j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	printf("Sorted array: ");
	for(i=0; i<limit;i++){
		printf("%d ,", array[i]);
	}



	return EXIT_SUCCESS;
}
