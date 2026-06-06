#include <stdio.h>

int main()
{
    int a[100];
    int i = 0, num;
    int count = 0, sum = 0;

    printf("Enter numbers :\n");

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
        {
            break;
        }

        a[i] = num;
        sum = sum + num;
        count++;
        i++;
    }

    printf("Total numbers entered = %d\n", count);
    printf("Sum of numbers = %d\n", sum);

    return 0;
}
