#include <stdio.h>
int binary(int arr[], int t, int n)
{
    int l = 0, r = n - 1, mid;
    mid = (l + r) / 2;
    if (arr[mid] == t)
    {
        while (arr[mid + 1] == t)
        {
            mid++;
        }
        return mid + 1;
    }
    if (l >= r)
    {
        return -1;
    }
    binary(arr, t, n);
}
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = binary(arr, t, n);
    printf("%d", a);
    return 0;
}