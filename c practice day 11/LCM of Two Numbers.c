#include <stdio.h>

void disp_LCM2(int, int);

int main()
{
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    disp_LCM2(n1, n2);

    return 0;
}

void disp_LCM2(int n1, int n2)
{
    int max, lcm;

    max = (n1 > n2) ? n1 : n2;

    while(1)
    {
        if(max % n1 == 0 && max % n2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM = %d", lcm);
}
