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
        int a, b;
        cin >> a >> b;
        int s = a + b;
        int ans = INT_MAX;
        for (int y = 1; y < s; y++)
        {
            if (s % y == 0)
            {
                int x = s - y;
                if (x >= 1)
                    ans = min(ans, abs(a - x));
            }
        }
        cout << ans;
        nl
    }

    return 0;
}
