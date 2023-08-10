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
		for(j=i;j<=4;j++){
			printf("  ");
		}
		for(j=1; j<=4; j++){
			if((i==2||i==3)&&(j==2||j==3)){
			printf("  ");
			}else{
				printf("* ");
			}
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
