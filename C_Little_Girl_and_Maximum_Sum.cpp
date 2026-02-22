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
    ll  n, q;
    cin >> n >> q;
    vector<ll > v(n), d(n + 1, 0);
    for (ll  i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        ll  a, b;
        cin >> a >> b;
        d[--a]++;
        d[b]--;
    }
    for (ll  i = 1; i < d.size(); i++)
    {
        d[i] += d[i - 1];
    }
    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for (ll  i = 0; i < v.size(); i++)
    {
        ans += v[i] * d[i];
    }
    cout << ans;
    return 0;
}