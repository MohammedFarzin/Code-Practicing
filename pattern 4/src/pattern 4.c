/*
 ============================================================================
 Name        : pattern.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;

	for(i=1; i<=14; i++){
		printf("* ");


		for(j=2; j<=4; j++){
			if((i==2 || i==4 || i==5 || i==7 || i==8 || i==9 || i==11 || i==12 || i==13 || i==14)&& j<=3){
				printf("* ");
			}else{
				printf(" ");
			}
		}

		printf("\n");
	}

	return EXIT_SUCCESS;
}
