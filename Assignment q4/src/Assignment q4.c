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
	float mark;

	setbuf(stdout, NULL);
	printf("Enter your marks: ");
	scanf("%f", &mark);

	if(mark>0 && mark <50){
		printf("You are failed");
	}else if(mark>=50 && mark<=100){
		printf("You are passed");
	}else{
		printf("Invalid");
	}
	return EXIT_SUCCESS;
}
