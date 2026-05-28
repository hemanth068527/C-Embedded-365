#include<stdio.h>

int main()
{
    int i = 2, c = 0;

    while(i < 10)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            c++;

        i++;
    }

    printf("%d", c);
}
