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
        int arr[n], xor_all = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xor_all = xor_all ^ arr[i];
        }
        int min = xor_all, min_val = 0;
        for (int i = 0; i < n; i++)
        {
            int x = xor_all ^ arr[i];
            if (x < min)
            {
                min = x;
            }
        }
        cout << min;
        nl
    }

    return 0;
}