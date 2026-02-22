#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}