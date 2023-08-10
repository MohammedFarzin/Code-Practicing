/*
 ============================================================================
 Name        : Diamond.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input,first,second,third;
	setbuf(stdout, NULL);
	printf("Enter the number of rows to show number pattern: ");
	scanf("%d", &input);

	for(first = 1; first <= input; first++){
		for(second = first;second < input; second++){
			printf(" ");
		}
		for(third = 1;third < (first*2); third++){
			printf("%d", third);
		}
		printf("\n");
	}

	for(first = input-1; first >= 1; first--){
		for(second = input; second > first; second--){
			printf(" ");
		}
		for(third = 1; third < (first*2); third++){
			printf("%d", third);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
