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

        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int odd = 0;
        int zeros = cnt[0];
        for (int i = 1; i <= n; i++)
        {
            odd += cnt[i] % 2;
            zeros += cnt[i] / 2;
        }

        int ans = odd + (zeros > 0 ? 1 : 0);
        cout << ans;
        nl
    }
    return 0;
}
