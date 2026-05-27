#include<stdio.h>

int main()
{
    int x, s;

    printf("Enter number: ");
    scanf("%d",&x);

    s = (x/100) + (x/10)%10 + (x%10);

    s = (s/10) + (s%10);

    printf("%d", (s/10) + (s%10));
}
