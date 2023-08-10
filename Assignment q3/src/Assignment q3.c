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
	int princialAmount;
	float interestRate,numberOfYears,simpleInterest;

	setbuf(stdout, NULL);
	printf("Enter your Principal Amount: ");
	scanf("%d", &princialAmount);
	printf("Enter your Interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter your Number of years: ");
	scanf("%f", &numberOfYears);

	simpleInterest=((princialAmount*interestRate*numberOfYears)/100);

	printf("Your Simple Interest rate is : %f", simpleInterest);


	return EXIT_SUCCESS;
}
