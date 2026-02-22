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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> mx(n), sum(n);
        mx[0] = a[0];
        sum[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            mx[i] = max(mx[i - 1], a[i]);
            sum[i] = sum[i - 1] + a[i];
        }

        while (q--)
        {
            ll k;
            cin >> k;

            int pos = upper_bound(mx.begin(), mx.end(), k) - mx.begin();

            if (pos == 0)
                cout << 0 << " ";
            else
                cout << sum[pos - 1] << " ";
        }
        nl
    }
    return 0;
}
