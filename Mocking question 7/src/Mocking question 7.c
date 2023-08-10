/*
 ============================================================================
 Name        : Mocking.c
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

	for(i=1; i<=13; i++){
		for(j=1; j<=2; j++){
			printf("* ");

		}
		for(j=2; j<=15; j++){
			if(i==2 && j<=4){
				printf("* ");
			}else if(i==5 && j<=8){
				printf("* ");
			}else if(i==9 && j<=12){
				printf("* ");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
