#include <stdio.h>

int main()
{
    int n, arr[50];
    char str[51];
    int i;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter digits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        str[i] = arr[i] + '0';
    }

    str[i] = '\0';

    printf("%s", str);
}
