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
    int n, k, q;
    cin >> n >> k >> q;

    vector<ll> vn(200003, 0);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vn[a]++;
        vn[b + 1]--;
    }

    for (int i = 1; i < 200003; i++)
    {
        vn[i] += vn[i - 1];
    }
    for (int i = 1; i < 200003; i++)
    {
        if (vn[i] >= k)
            vn[i] = 1;
        else
            vn[i] = 0;
    }

    vector<pair<ll, int>> check(200004, {0, 0});
    int a = 0;

    for (int i = 1; i < 200003; i++)
    {
        if (vn[i - 1] == 1)
        {
            a++;
        }
        check[i] = {a, vn[i]};
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = check[r].first - check[l].first;
        if (check[r].second == 1)
            ans++;
        cout << ans;
        nl
    }

    return 0;
}
