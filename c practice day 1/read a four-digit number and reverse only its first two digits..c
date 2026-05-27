#include<stdio.h>

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d",&x);

    printf("%d", ((x/100)%10)*1000 + (x/1000)*100 + (x%100));
}
