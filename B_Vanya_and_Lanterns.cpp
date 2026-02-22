#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double ans, a0, an, distance = arr[0], max1, max2;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - arr[i - 1]) > distance)
            distance = (arr[i] - arr[i - 1]);
    }
    a0 = 2 * arr[0];

    an = 2 * (l - arr[n - 1]);
    if (a0 >= an && a0 >= distance)
        printf("%.10lf", a0 / 2);
    else if (an >= a0 && an >= distance)
        printf("%.10lf", an / 2);
    else
        printf("%.10lf", distance / 2);

    return 0;
}