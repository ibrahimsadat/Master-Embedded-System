#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
int sum=0,i;
printf("Enter The Number\n");
scanf("%d",&num);
for(i=0;i<=num;i++)
sum+=i;
printf("sum=%d",sum);
}
