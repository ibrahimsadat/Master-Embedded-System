#include <stdio.h>
#include <stdlib.h>

void count(int n)
{

    int count0 = 0, count1 = 0;


    while (n > 0) {


        if (n & 1) {
            count1++;
        }


        else {
            count0++;
        }

        n = n >> 1;
    }


    printf("Count of 0s in N is %d\n", count0);
    printf("Count of 1s in N is %d\n", count1);
}


int main()
{

    int n = 15;


    count(n);
    return 0;
}
