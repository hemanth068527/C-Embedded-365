#include <stdio.h>

int disp_count_sum14(int);

int main()
{
    int x, y;

    y = disp_count_sum14(x);

    printf("%d", y);

    return 0;
}

int disp_count_sum14(int y)
{
    int count = 0, sum, temp;

    for(y = 1; y < 100000; y++)
    {
        temp = y;
        sum = 0;

        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if(sum == 14)
            count++;
    }

    return count;
}
