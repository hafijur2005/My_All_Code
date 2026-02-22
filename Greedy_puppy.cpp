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
        int n, k, mx = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            mx = max(mx, n % i);
        cout << mx;
        nl
    }

    return 0;
}