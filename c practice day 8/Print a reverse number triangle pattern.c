#include <stdio.h>

int main()
{
    int i = 5, j;

    while (i >= 1)
    {
        j = 1;

        while (j <= i)
        {
            printf("%d", j);
            j++;
        }

        printf("\n");
        i--;
    }
}
