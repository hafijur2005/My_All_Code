#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == 1)
        {
            int j = 2;
            while (i * j <= n)
            {
                arr[i * j] = 0;
                j++;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 1)
            printf("%d ", i);
    }
    return 0;
}