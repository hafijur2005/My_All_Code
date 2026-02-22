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
        ll a, b, n;
        cin >> a >> b >> n;
        if (b % a == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        ll k = (n + a - 1) / a;
        ll g = __gcd(a, b);
        ll x = b / g;
        ll ans = -1;
        for (ll i = 0; i < x; ++i)
        {
            ll val = (k + i) * a;
            if (val % b != 0)
            {
                ans = val;
                break;
            }
        }

        cout << ans;
        nl
    }
    return 0;
}
