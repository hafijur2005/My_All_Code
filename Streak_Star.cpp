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
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> l(n), r(n);

        l[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
                l[i] = l[i - 1] + 1;
            else
                l[i] = 1;
        }

        r[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] <= a[i + 1])
                r[i] = r[i + 1] + 1;
            else
                r[i] = 1;
        }

        int ans = 1;
        for (int i = 0; i < n; i++)
            ans = max(ans, l[i]);

        for (int i = 0; i < n; i++)
        {
            ll val = a[i] * x;

            bool ok_left = (i == 0 || a[i - 1] <= val);
            bool ok_right = (i == n - 1 || val <= a[i + 1]);

            if (ok_left && ok_right)
            {
                int cur = 1;
                if (i > 0)
                    cur += l[i - 1];
                if (i < n - 1)
                    cur += r[i + 1];
                ans = max(ans, cur);
            }
        }
        cout << ans;
        nl
    }
    return 0;
}
