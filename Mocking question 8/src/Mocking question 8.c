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
	int i,j,n=9;



	for(i=1; i<=n; i++){
		for(j=0; j<=n; j++){
			if(j==i || j==(n+1-i)){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
