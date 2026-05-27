#include<stdio.h>

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d",&x);

    printf("%d", 10 + (x%10));
}
