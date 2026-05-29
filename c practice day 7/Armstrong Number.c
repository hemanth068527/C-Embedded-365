#include<stdio.h>
int main()
{
    int x,c=0,z=0,result=0,temp;
    printf("enter the number :");
    scanf("%d",&x);
    temp = x;
    while(temp > 0)
    {
        temp/=10;
        c++ ;
    }
    temp = x ;
    while(temp > 0)
    {
        z = temp % 10;
        int i=1;
        int y=1;
        while(i<=c)
        {
            y*=z;
            i++ ;
        }
        result += y;
        temp/=10;
    }
    if(result==x)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}
