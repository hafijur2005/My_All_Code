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
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    ll x = a / b;
    ll y = a / c;
    ll l = b / __gcd(b, c) * c; 
    ll z = a / l;

    ll ans = 0;

    if (d > e)
    {
        ans = d * (x - z) + (y - z) * e + z * d;
    }
    else
    {
        ans = d * (x - z) + (y - z) * e + z * e;
    }

    cout << ans;
    return 0;
}
