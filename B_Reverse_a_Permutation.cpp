#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mx1 = -1, mx1p = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mx1)
            {
                mx1 = arr[i];
                mx1p = i;
            }
        }
        if (mx1p != 0)
        {
            for (int i = 0, j = mx1p; i < j; i++, j--)
            {
                swap(arr[i], arr[j]);
            }
        }
        else
        {
            int mx2 = -1, mx2p = -1;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > mx2)
                {
                    mx2 = arr[i];
                    mx2p = i;
                }
            }

            if (mx2p != -1)
            {
                for (int i = 1, j = mx2p; i < j; i++, j--)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}