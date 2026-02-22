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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val <= q)
            {
                total++;
            }
            else
            {
                if (total > 0)
                {
                    v.push_back(total);
                    total = 0;
                }
            }
        }
        if (total > 0)
            v.push_back(total);
        ll ans = 0;
        for (auto val : v)
        {
            if (val >= k)
            {
                ans += (1LL * (val - k + 1) * (val - k + 2)) / 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}