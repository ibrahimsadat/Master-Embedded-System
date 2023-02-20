#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num_1,num_2,num_3,max_number;
   printf("Enter The Numbers:\n");
   scanf("%f%f%f",&num_1,&num_2,&num_3);
   if((num_1>num_2)&&(num_1>num_3)){
    max_number=num_1;
   }else if((num_2>num_1)&&(num_2>num_3)){
   max_number=num_2;

   }else if((num_3>num_1)&&(num_3>num_2)){
   max_number=num_3;
   }
   printf("Maximum among all three numbers =%.2lf",max_number);
}
