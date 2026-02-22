#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = n - 1;
    int f = 0, resA, resB;
    resA = resB = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[f] > arr[j])
        {
            if (i % 2 == 0)
                resA += arr[f];
            else
                resB += arr[f];
            f++;
        }
        else
        {
            if (i % 2 == 0)
                resA += arr[j];
            else
                resB += arr[j];
            j--;
        }
    }
    printf("%d %d", resA, resB);
    return 0;
}