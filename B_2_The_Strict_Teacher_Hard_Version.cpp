#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005


void solve(int tt)
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> tech;
    while (x--)
    {
        int v;
        cin >> v;
        tech.push_back(v);
    }
    sort(tech.begin(), tech.end());
    while (y--)
    {
        int dev;
        cin >> dev;
        if (tech[0] > dev)
            cout << tech[0] - 1 << nl;
        else if (tech[0] < dev)
            cout << n - tech[0] << nl;
        else
        {
            auto it = lower_bound(tech.begin(), tech.end(), dev);
            int right = *it;
            --it;
            int left =*it;
            int mid = (right + left) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << nl;
        }
    }
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++)
    {
        solve(tt);
    }

    return 0;
}