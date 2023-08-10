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
	int i,j,size,arr[100],temp;

		setbuf(stdout, NULL);
			printf("Enter the size of array");
			scanf("%d", &size);

			for(i=0; i<size; i++){
				scanf("%d", &arr[i]);
			}


			for(i=0,j=size/2-1; i<size/4; j--,i++){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

			printf("first half values after reversing");
			for(i=0; i<size; i++){
				printf("%d", arr[i]);
			}

	return EXIT_SUCCESS;
}
