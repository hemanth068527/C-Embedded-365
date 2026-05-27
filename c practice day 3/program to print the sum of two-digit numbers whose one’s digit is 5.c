#include<stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 15; i < 100; i = i + 10)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}
