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
        vector<int> p(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        int ans = 0;
        for (int i = 1; i <= n;)
        {
            if (p[i] == i)
            {
                int len = 0;
                while (i <= n && p[i] == i)
                {
                    len++;
                    i++;
                }
                ans += (len + 1) / 2;
            }
            else
            {
                i++;
            }
        }

        cout << ans;
        nl
    }
    return 0;
}
