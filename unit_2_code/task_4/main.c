#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
printf("Enter The Number:\n");
scanf("%d",&number);
if(number>0){
    printf("The number Postive");
}else if(number<0){
printf("The number Negtive");

}else if(number==0){
printf("This number Zero\n");
}
}
