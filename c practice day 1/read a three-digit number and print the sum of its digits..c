#include<stdio.h>

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d",&x);

    printf("%d", (x/100) + (x/10)%10 + (x%10));
}
