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
        ll k;
        cin >> n >> k;

        vector<ll> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];

        ll sum = 0;
        int l = 0, ans = 0;

        for (int r = 0; r < n; r++)
        {
            sum += a[r];
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                sum = a[r];
                l = r;
            }
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }

        cout << ans;
        nl
    }
}