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
	int i,size,arr[100],position,value;

		setbuf(stdout, NULL);
		/// Recieving the values from the users
		printf("Enter the size of Array");
		scanf("%d", &size);


		printf("Enter the values in the arrays");
		for(i=0; i<size; i++){
			scanf("%d", &arr[i]);
		}

		printf("Enter the position");
		scanf("%d", &position);

		printf("Enter the value to insert");
		scanf("%d", &value);

		for(i=size-1; i>=position-1; i--){
			arr[i+1]=arr[i];
		}
			arr[position-1]=value;


		for(i=0; i<=size; i++){
						printf("%d ", arr[i]);
				}






	return EXIT_SUCCESS;
}
