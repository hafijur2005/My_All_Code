#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using ll = long long;
using namespace __gnu_pbds;

using ordered_set = tree<pair<ll, int>, null_type, less<pair<ll, int>>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        ll s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        ll L = s - y;
        ll R = s - x;

        ordered_set os;
        long long ans = 0;

        for (int j = 0; j < n; j++)
        {
            ll lo = L - a[j];
            ll hi = R - a[j];

            if (lo <= hi)
            {
                int x = os.order_of_key({hi, INT_MAX});
                int cnt_lt_lo = os.order_of_key({lo, INT_MIN});
                ans += (x - cnt_lt_lo);
            }
            os.insert({a[j], j});
        }
        cout << ans << "\n";
    }
}
