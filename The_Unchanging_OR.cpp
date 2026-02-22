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
        ll n;
        cin >> n;
        ll p = 0;
        while ((1 << p) <= n)
            p++;
        
        ll x = p - 1;
        ll ans = (n - 1) - x;
        cout << ans;
        nl
    }
    return 0;
}
