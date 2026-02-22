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
        string s;
        cin >> s;
        int count = 0, l = 0, ans = INT_MAX;
        for (int i = 0; i < k; i++)
            if (s[i] == 'W')
                count++;

        ans = min(ans, count);
        for (int i = k; i < n; i++)
        {
            if (s[l] == 'W')
                count--;
            l++;
            if (s[i] == 'W')
                count++;
            ans = min(ans, count);
        }

        cout << ans << "\n";
    }

    return 0;
}
