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
0
	for(i=1; i<=10; i++){
		printf("* ");

		for(j=2; j<=20; j++){
			if(i==1 && j<=5){
				printf("* ");
			}else if(i==3 && j<=10){
				printf("* ");
			}else if(i==6 && j<=15){
				printf("* ");
			}else if(i==10 && j<=20){\
				printf("* ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
