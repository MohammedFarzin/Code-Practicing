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
		int i,l2=0,l1=0,a[20];

		setbuf(stdout, NULL);
		printf("Enter the values");
		for(i=0; i<5; i++){
			scanf("%d", &a[i]);
		}

		for(i=0; i<5; i++){
			if(a[i]>l1){
				l2=l1;
				l1=a[i];
			}else if(l2>a[i]&&l1<a[i]){
				l2=a[i];
			}
		}

		///for(i=0; i<5; i++){
			printf("The largest number %d\n", l1);
			printf("The second largest number %d", l2);
		//}


	return EXIT_SUCCESS;
}
