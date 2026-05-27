#include<stdio.h>

int main()
{
    int x;

    printf("Enter two digit number: ");
    scanf("%d",&x);

    if((x / 10) == (x % 10))
        printf("Failure");
    else
        printf("Success");
}
