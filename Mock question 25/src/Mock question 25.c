/*
 ============================================================================
 Name        : Mock.c
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

	for(i=1; i<=4; i++){
		for(j=1; j<=i*2-1; j++){
			if(j%2==0){
				printf("* ");
			}else{
				printf("%d ", i);
			}
		}


		printf("\n");
	}

	for(i=4; i>=1; i--){
		for(j=1; j=i*2-1; j++){
			if(j%2==0){
				printf("* ");

			}else{
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
