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
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x = x ^ arr[i];
        }
        if (n % 2 == 0)
        {
            if (x == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "-1";
            }
        }
        else
        {
            cout << x;
        }
        nl
    }

    return 0;
}