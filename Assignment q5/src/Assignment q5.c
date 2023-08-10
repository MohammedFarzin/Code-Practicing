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
	float totalMark;
	setbuf(stdout, NULL);
	printf("Enter your total mark");
	scanf("%f", &totalMark);

	if(totalMark > 90){
		printf("Your grade is : A");
	}else if(totalMark >= 80 && totalMark <=89){
		printf("Your grade is : B");
	}else if(totalMark >= 70 && totalMark <=79){
		printf("Your grade is : C");
	}else if(totalMark >= 60 && totalMark <=69){
		printf("Your grade is : D");
	}else if(totalMark >= 50 && totalMark <=59){
		printf("Your grade is : E");
	}else if(totalMark < 50){
		printf("Your grade is : FAILED");
	}
	return EXIT_SUCCESS;
}
