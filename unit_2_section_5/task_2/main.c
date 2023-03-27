/*
 ============================================================================
 Name        : task_2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main(void) {
int num;
printf("Enter the Postive Number: ");
fflush(stdout); fflush(stdout);
scanf("%d",&num);
printf("factorial of %d =%d",num,factorial(num));
}
int factorial(int num){
	if(num!=1)
		return num*factorial(num-1);
}
