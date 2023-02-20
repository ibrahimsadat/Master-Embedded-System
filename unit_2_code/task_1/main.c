#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
printf("Enter The Number:\n ");
scanf("%d",&number);
if(number %2==0){
    printf("%d This Number Even\n",number);

}else
printf("%d This Number Odd\n",number);
}
