/*
 ============================================================================
 Name        : task_4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int num1,int num2);
int main(void) {
	int base,exp;
	printf("Enter the base number: ");
	fflush(stdout); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(postive integer): ");
	fflush(stdout); fflush(stdout);
	scanf("%d",&exp);
	printf("%d%d=%d",base,exp,power(base,exp));
	fflush(stdout); fflush(stdout);
	return 0;
}
int power(int base,int exp){
	if(exp !=0){
		return (base*power(base,exp-1));

	}
	else
		return 1;
}
