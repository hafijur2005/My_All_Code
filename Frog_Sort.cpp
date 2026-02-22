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

        vector<int> w(n), l(n);
        for (int i = 0; i < n; i++)
            cin >> w[i];
        for (int i = 0; i < n; i++)
            cin >> l[i];

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({w[i], i});

        sort(all(v));

        vector<ll> pos(n);
        for (int i = 0; i < n; i++)
            pos[i] = i + 1;

        ll x = 0;
        ll last = pos[v[0].second];

        for (int i = 1; i < n; i++)
        {
            int id = v[i].second;
            while (pos[id] <= last)
            {
                pos[id] += l[id];
                x++;
            }
            last = pos[id];
        }

        cout << x;
        nl
    }
    return 0;
}
