#include<stdio.h>

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d",&x);

    printf("%d", x - (((x/10)+(x%10))%2)*5);
}
