#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n], arr1[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int sum = 0;
            for(int k = 0; k < n; k++)
            {
                sum += arr[i][k] * arr[k][j];
            }
            arr1[i][j] = sum;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
