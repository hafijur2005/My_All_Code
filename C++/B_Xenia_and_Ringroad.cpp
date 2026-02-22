#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    long long int t = arr[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (arr[i] - arr[i - 1] < 0)
        {
            t = t + n - arr[i - 1] + arr[i];
        }
        else
        {
            t = t + arr[i] - arr[i - 1];
        }
    }
    cout << t;
    return 0;
}