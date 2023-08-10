/*
 ============================================================================
 Name        : mock.c
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

	for(i=1; i<4; i++){
		for(j=i;j<=4;j++){

			printf("  ");
		}
		for(j=1; j<i; j++){
			if(j==1){
			printf("* ");
			}else{
				printf("  ");
			}
		}

		for(j=1; j<=i; j++){
			if(j==i){
			printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}

	for(i=1;i<=4;i++){
		for(j=1; j<=i;j++){
			printf("  ");
		}

		for(j=i;j<=4;j++){
			if(j==i){
			printf("* ");
			}else{
				printf("  ");
			}
		}

		for(j=i; j<4; j++){
			if(j==3){
			printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
