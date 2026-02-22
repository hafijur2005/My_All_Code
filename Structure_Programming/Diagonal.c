#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int ti, tj;
    scanf("%d%d", &ti, &tj);
    int sum = 0;

    if (ti - 1 >= 0 && tj - 1 >= 0)
        sum += arr[ti - 1][tj - 1]; 
    if (ti + 1 < n && tj - 1 >= 0)
        sum += arr[ti + 1][tj - 1]; 

    if (ti - 1 >= 0 && tj + 1 < n)
        sum += arr[ti - 1][tj + 1]; 

    if (ti + 1 < n && tj + 1 < n)
        sum += arr[ti + 1][tj + 1]; 

    printf("%d", sum);
    return 0;
}
