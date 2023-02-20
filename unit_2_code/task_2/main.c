#include <stdio.h>
#include <stdlib.h>

int main()
{
char Alpha;
printf("Enter an Alphabet:\n");
scanf("%c",&Alpha);
switch(Alpha){
case 'a':
    printf("%cvowel");
    break;

case 'e':
    printf("%cvowel");
    break;
case 'i':
    printf("%cvowel");
    break;
case 'o':
    printf("%cvowel");
    break;
case 'u':
    printf("%cvowel");
    break;
default:
    printf("%cconsonant\n");

}
}
