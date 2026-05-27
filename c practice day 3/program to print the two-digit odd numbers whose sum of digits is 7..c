#include<stdio.h>

int main()
{
    int i;

    for(i = 11; i < 100; i = i + 2)
    {
        if((i / 10) + (i % 10) == 7)
        {
            printf("%d\n", i);
        }
    }
}
