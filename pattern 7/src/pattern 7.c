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

	for(i=1; i<=7; i++){
		printf("* ");

	for(j=2; j<=16; j++){
		if(i==1 && j<=4){
			printf("* ");
		}else if(i==2 && j<=2){
			printf("* ");
		}else if(i==3 && j<=8){
			printf("* ");
		}else if(i==4 && j<=3){
			printf("* ");
		}else if(i==5 && j<=12){
			printf("* ");
		}else if(i==6 && j<=4){
			printf("* ");
		}else if(i==7 && j<=16){
			printf("* ");
		}
	}
	printf("\n");
	}

	return EXIT_SUCCESS;
}
