#include <stdio.h>

int main()
{
    int i = 1, j;

    while (i <= 4)
    {
        j = 1;
        while (j <= 4)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}
