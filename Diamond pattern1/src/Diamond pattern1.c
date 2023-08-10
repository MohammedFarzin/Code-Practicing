/*
 ============================================================================
 Name        : Diamond.c
 Author      : farzin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,rows,col,col1,col2;

		setbuf(stdout, NULL);
		printf("Enter the number of rows");
		scanf("%d", &input);

		for(rows=1; rows<input; rows++){
			for(col=rows; col<=input; col++){
				printf("  ");
			}
			for(col1=1; col1<rows; col1++){
				printf("* ");
			}
			for(col2=1; col2<=rows; col2++){
				printf("* ");
			}
			printf("\n");
		}


		for(rows=1; rows<=input; rows++){
				for(col=1; col<=rows; col++){
					printf("  ");

				}
				for(col1=rows; col1<input; col1++){
					printf("* ");
				}
				for(col2=rows; col2<=input; col2++){
					printf("* ");
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
