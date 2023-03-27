#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch;
printf("Enter the Character\n");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    printf("Character is an ALPHABET");
}else
printf("Character is NOT an ALPHABET");
}
