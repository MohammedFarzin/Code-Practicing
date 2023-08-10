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
	int input,num,sum=0;
	setbuf(stdout, NULL);
	printf("Enter a number");
	scanf("%d", &input);

	for(num=1; num<=input; num++){
		if(num%2 != 0){
			sum= sum+ num;


		}
	}

	printf("%d", sum);

	return EXIT_SUCCESS;
}
