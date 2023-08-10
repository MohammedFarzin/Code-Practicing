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

	for(i=1; i<=9; i++){
		printf("* ");

		for(j=2; j<=9; j++){
			if((i==1 || i==2 ) && j<=3){
				printf("* ");
			}else if((i==4 || i==5) && j<=6){
				printf("* ");
			}else if((i==8 || i==9) && j<= 9){
				printf("* ");
			}else{
				printf(" ");
			}
		}
		printf(" \n");
	}
	return EXIT_SUCCESS;
}
