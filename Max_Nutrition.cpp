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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(a[i]) == mp.end())
                mp[a[i]] = b[i];
            else
                mp[a[i]] = max(mp[a[i]], b[i]);
        }

        int ans = 0;
        for (auto x : mp)
        {
            if (x.second > 0)
                ans += x.second;
        }

        cout << ans ;
        nl
    }
    return 0;
}
