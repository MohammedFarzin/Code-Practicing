/*
 ============================================================================
 Name        : Assignment.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input, array1[100][100], array2[100][100],sumOfArray[100][100],count1,count2;

	setbuf(stdout, NULL);
	printf("Enter the size of arrays");
	scanf("%d", &input);

	printf("Enter the values of arrays");
	for(count1=0; count1<input; count1++){
		for(count2=0; count2<input; count2++){
			scanf("%d", &array1[count1][count2]);
		}
	}

	printf("Enter the values of array 2");
	for(count1=0; count1<input; count1++){
		for(count2=0; count2<input; count2++){
			scanf("%d", &array2[count1][count2]);
		}
	}


	for(count1=0;count1<input; count1++){
		for(count2=0;count2<input; count2++){
			sumOfArray[count1][count2] =array1[count1][count2]+array2[count1][count2];
		}
	}

	for(count1=0;count1<input; count1++){
			for(count2=0;count2<input; count2++){
				printf("%d\t", sumOfArray[count1][count2]);
			}
			printf("\n");
		}





	return EXIT_SUCCESS;
}
