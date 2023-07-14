#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int,int ,int );


int main() {
    int num1=1,num2=2,num3=3;
    int res;
    res=num1+num2+num3;
    max(num1,num2,num3);
    printf("%d",res);

}
int max(int x,int y ,int z ){

int res;
res=x+y+z;
return res;

}
