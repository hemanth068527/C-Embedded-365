#include <stdio.h>

void incrementArray(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 1;
    }
}

int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    incrementArray(a, 5);

    printf("Array after increment:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
