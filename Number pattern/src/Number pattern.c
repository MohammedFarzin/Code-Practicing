/*
 ============================================================================
 Name        : Number.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,x,y;

	printf("Enter the number of rows to show number pattern: ");
	scanf("%d", &n);
	printf("\n");
	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			if(y<=x){
				printf("%d", y);
			}else{
				printf(" ");
			}
		}
			for(y=n; y>=1;y--){
				if(y<=x){
					printf("%d", y);
				}else{
					printf(" ");
				}
			}




		printf("\n");
	}
	return EXIT_SUCCESS;
}
