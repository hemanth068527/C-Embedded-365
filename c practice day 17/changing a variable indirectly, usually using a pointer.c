#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before change = %d\n", num);

    ptr = &num;

    *ptr = *ptr + 10;

    printf("After change = %d\n", num);
}
