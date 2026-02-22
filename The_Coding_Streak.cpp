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
        int count = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
            {
                count++;
            }
            else
            {
                mx = max(count, mx);
                count = 0;
            }
        }
        mx = max(count, mx);
        cout << mx;
        nl
    }
    return 0;
}