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
        int ans = 0;
        for (int b = 0; b <= 31; ++b)
        {
            int p = 1 << b;
            if (p > n)
                break;
            int x = (1 << (b + 1)) - 1;
            int y;
            if (n >= x)
                y = p;
            else
                y = n - p + 1;
            ans = max(ans, y);
        }
        cout << ans ;
        nl
    }
    return 0;
}