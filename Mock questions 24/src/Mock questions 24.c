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
	char p='A';

	for(i=1; i<=7; i++){
		for(j=1; j<=i; j++){
			if(i%2!=0){
				printf("%c", p);

			}else{
				printf("%d", i/2);

			}
		}

		if(i%2!=0){
			p++;
		}else{
			printf("");

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
