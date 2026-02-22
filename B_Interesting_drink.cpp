#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int n, x, q, m;
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[x]++;
        if (x > max)
            max = x;
    }
    for (int i = 1; i <= max; i++)
    {
        arr[i] += arr[i - 1];
    }
    cin >> q;
    while (q--)
    {
        cin >> m;
        if (m >= max)
            cout << n << endl;
        else
            cout << arr[m] << endl;
    }
    return 0;
}