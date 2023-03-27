/*
 ============================================================================
 Name        : task_1.c
 Author      : ibrahim el sadat
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int prime(int number);
int main(void) {
	int num1,num2,i,flag;
	printf("Enter tow number(intervals): ");
	fflush(stdout);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("prime number btween %d and %d are",num1,num2);
	for(i=num1+1;i<num2;++i){
		flag=prime(i);
		if(flag==0)
			printf("%d",i);

	}
}
int prime(int number){
int j,flag=0;
for(j=2;j<=number/2;++j){
	if(number%j==0){
		flag=1;
		break;
	}
}
return flag;
}








