#include <stdio.h>

int main()
{
    int a[100], b[100];
    int num, count = 0;
    int i, j, temp;

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


    for(i = 0; i < count; i++)
    {
        int sum = 0;
        num = a[i];

        while(num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        b[i] = sum;
    }


    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("New array in ascending order:\n");

    for(i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
