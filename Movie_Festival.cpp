#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}
int main()
{
    fast;
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(all(v), cmp);
    ll x = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= x)
        {
            ans++;
            x = v[i].second;
        }
    }
    cout << ans;
    return 0;
}
