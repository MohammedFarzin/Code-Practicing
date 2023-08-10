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

	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			if((i==2||i==6)&&(j==3||j==4||j==5)){
				printf("  ");
			}else if((i==3||i==5)&&(j==2||j==4||j==6)){
				printf("  ");
			}else if(i==4&&(j==2||j==3||j==5||j==6)){
				printf("  ");
			}else{
				printf("* ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
