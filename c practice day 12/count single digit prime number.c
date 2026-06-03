#include <stdio.h>

int count_1digit_prime(int);

int main()
{
    int x,y;

    y = count_1digit_prime(x);

    printf("%d", y);

    return 0;
}

int count_1digit_prime(int y)
{
    int count = 0;

    for(int i = 0; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            count++;
    }

    return count;
}
