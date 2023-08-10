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
		int n=5;
		int i,a[20],l1,l2;

		setbuf(stdout, NULL);
		printf("Enter the values");
		for(i=0; i<5; i++){
			scanf("%d", &a[i]);
		}


		for(i=0; i<n; i++){

			if(a[i]<l1){
				l2=l1;
				l1=a[i];

			}else if(l1<a[i]&&l2<a[i]){
				l2=a[i];
			}


		}


		printf("The smallest value is: %d\n", l1);
		printf("The second smalles value is: %d", l2);
	return EXIT_SUCCESS;
}
