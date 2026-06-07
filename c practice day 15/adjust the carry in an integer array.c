#include <stdio.h>

int main()
{
    int a[50], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = n - 1; i > 0; i--)
    {
        if(a[i] >= 10)
        {
            a[i - 1] += a[i] / 10;
            a[i] = a[i] % 10;
        }
    }

    printf("carry adjustment:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
