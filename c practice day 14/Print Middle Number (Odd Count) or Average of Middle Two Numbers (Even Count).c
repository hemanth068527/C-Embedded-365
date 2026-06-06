#include <stdio.h>

int main()
{
    int a[100];
    int num, count = 0;
    float avg;

    printf("Enter numbers :\n");

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
        {
            break;
        }

        a[count] = num;
        count++;
    }

    if(count % 2 != 0)
    {
        printf("Middle number = %d", a[count / 2]);
    }
    else
    {
        avg = (a[(count / 2) - 1] + a[count / 2]) / 2.0;
        printf("Average of middle two numbers = %.2f", avg);
    }
}
