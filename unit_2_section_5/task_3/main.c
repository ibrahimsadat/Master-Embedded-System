/*
 ============================================================================
 Name        : task_3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Revers();
int main(void) {
printf("Enter the sentace:");
fflush(stdout); fflush(stdout);
Revers();
return 0;

}
void Revers(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		Revers();
		printf("%c",c);
	}
}
