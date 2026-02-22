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
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 2), change(n + 2, 0), c_v(m + 2, 0);
    vector<pair<pair<ll, ll>, ll>> v(m + 2);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++)
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        c_v[l]++;
        c_v[r + 1]--;
    }
    ll c = 0;
    for (int i = 1; i <= m; i++)
    {
        c += c_v[i];
        change[v[i].first.first] += v[i].second * c;
        change[v[i].first.second + 1] -= v[i].second * c;
    }
    c = 0;
    for (int i = 1; i <= n; i++)
    {
        c += change[i];
        a[i] += c;
        cout << a[i] << " ";
    }
    nl
     return 0;
}