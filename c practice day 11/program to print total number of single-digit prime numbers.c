#include <stdio.h>

void disp_2digit_even_sum6(void);

int main()
{
    disp_2digit_even_sum6();
    return 0;
}

void disp_2digit_even_sum6(void)
{
    int count = 0;

    for(int i = 2; i <= 9; i++)
    {
        int prime = 1;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
            count++;
    }

    printf("%d", count);
}
