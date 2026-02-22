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
        int n, k;
        cin >> n >> k;
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
                cnt[x]++;
        }
        if (k == 0)
        {
            cout << cnt[0];
            nl continue;
        }
        int missing = 0;
        for (int i = 0; i < k; i++)
        {
            if (cnt[i] == 0)
                missing++;
        }
        cout << max(missing, cnt[k]);
        nl
    }
    return 0;
}
