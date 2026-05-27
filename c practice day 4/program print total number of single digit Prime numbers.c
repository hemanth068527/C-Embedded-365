#include<stdio.h>

int main()
{
    int i, j, c, total = 0;

    for(i = 0; i <= 9; i++)
    {
        c = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                c++;
        }

        if(c == 2)
            total++;
    }

    printf("%d", total);

    return 0;
}
