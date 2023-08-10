/*
 ============================================================================
 Name        : Pyramid.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,s,n, y=0, cntr = 0, cntr1 =0;\

	printf("Enter the number of rows to show number pattern");
	scanf("%d", &n);
	printf("\n");

	for(x = 1; x<=n; ++x){
		for(s=1; s <=n-x; ++s){
			printf(" ");
			++cntr;
		}

		while(y != 2*x-1){
			if(cntr <= n-1){
				printf("%d", x+y);
			++cntr;
			}else{
				++cntr1;
				printf("%d", (x+y-2*cntr1));
			}
			++y;
		}
		cntr1 = cntr = y = 0;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
