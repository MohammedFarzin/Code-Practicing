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
	int input,first;
	int array1[100], array2[100], temp[100];
	setbuf(stdout, NULL);
	printf("Enter the size of arrays ");
	scanf("%d", &input);



	printf("Enter the values of arrays");
	for(first=0; first<input; first++){
		scanf("%d", &array1[first]);
	}

	printf("Enter the values of Array 2: ");
	for(first=0; first<input; first++){
			scanf("%d", &array2[first]);

				temp[first]=array1[first];
				array1[first]=array2[first];
				array2[first]=temp[first];

			printf("Array1:");
			for(first=0;first<input;first++){
				printf("%d ,", array1[first]);
			}

			printf("\n");
			printf("Array2:");
			for(first=0;first<input; first++){
				printf("%d ,", array2[first]);
			}



	return EXIT_SUCCESS;
			}


