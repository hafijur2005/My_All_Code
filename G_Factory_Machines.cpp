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
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll seconds)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (seconds / a[i]);
            if (cnt >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans;
    nl

        return 0;
}