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
	char word[100];
	int limit,count,flag=0;
	setbuf(stdout, NULL);
	printf("Enter the word");
	scanf("%s", &word);

	limit = strlen(word);
	for(count=0; count<(limit/2); count++){
		if(word[count] != word[(limit-1)-count]){
			flag = 1;
		}else{
			flag = 0;
		}
	}

	if(flag == 0){
		printf("This is a palindrome");
	}else{
		printf("This is not a palindrome");
	}

	return EXIT_SUCCESS;
}
