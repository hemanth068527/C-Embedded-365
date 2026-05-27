#include<stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 71; i < 80; i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}
