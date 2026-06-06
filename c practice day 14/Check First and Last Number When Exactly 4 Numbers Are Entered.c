#include <stdio.h>

int main()
{
    int a[100];
    int num, count = 0;

    printf("Enter numbers:\n");

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

    if(count == 4)
    {
        if(a[0] == a[count - 1])
        {
            printf("Success");
        }
        else
        {
            printf("Failure");
        }
    }
    else
    {
        printf("Failure");
    }
}
