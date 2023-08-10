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
	int i,j,n=5;

	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(i%2!=0){
				printf("z");
			}else{
			printf("0");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
