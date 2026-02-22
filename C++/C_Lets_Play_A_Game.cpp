#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[n - 1])
            {
                max++;
            }
        }
        if (max % 2 == 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}