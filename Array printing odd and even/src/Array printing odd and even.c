/*
 ============================================================================
 Name        : Array.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j=0,k=0,a[20],b[20],c[20], n=5;

	setbuf(stdout, NULL);
	printf("Enter the values");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}

	for(i=0; i<n; i++){
		if(i%2==0){
			b[j]=a[i];
			j++;
		}else{
			c[k]=a[i];
			k++;
		}
	}


	for(i=0; i<j; i++){
		printf("%d ", b[i]);

	}
	printf("\n");
	for(i=0; i<k; i++){

			printf("%d ", c[i]);
		}


	return EXIT_SUCCESS;
}
