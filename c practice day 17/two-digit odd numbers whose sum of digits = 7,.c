#include <stdio.h>

void find_2digit_odd_sum7()
{
    int num, sum, temp;

    for(num = 10; num <= 99; num++)
    {
        if(num % 2 != 0)   // odd number
        {
            temp = num;

            sum = (temp / 10) + (temp % 10);

            if(sum == 7)
            {
                printf("%d ", num);
            }
        }
    }
}

int main()
{
    find_2digit_odd_sum7();
}
