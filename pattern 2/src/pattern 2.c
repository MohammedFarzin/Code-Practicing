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


	for(i=1; i<=12; i++){
		printf("\n");
		printf("* ");
		for(j=2; j<=6; j++){
			if(i==1&&j<=2){
				printf("* ");
			}else if(i==5&&j<=4){
				printf("* ");
			}else if(i==12&&j<=6){
				printf("* ");
			}else{
			printf(" ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
