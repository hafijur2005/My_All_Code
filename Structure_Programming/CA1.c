#include <stdio.h>
#include <math.h>
int binary_surch(int arr[], int x, int low, int high)
{
    int mid = (high + low) / 2;
    if (arr[mid] == x)
    {
        return 1;
    }
    if (high < low)
    {
        return 0;
    }
    if (arr[mid] > x)
    {
        return binary_surch(arr, x, low, mid - 1);
    }
    else if (arr[mid] < x)
    {
        return binary_surch(arr, x, mid + 1, high);
    }
}
int main()
{
    int n, x, mid, high, low;
    scanf("%d%d", &n, &x);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = binary_surch(arr, x, 0, n - 1);
    if (ans)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}