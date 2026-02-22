#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[10] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr1[arr[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] != 0)
        {
            printf("%d -> %d\n", i, arr1[i]);
        }
    }

    return 0;
}