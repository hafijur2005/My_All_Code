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
        int n, x, k;
        cin >> n >> x >> k;
        int ans = abs(x - 0);
        int a = (x / k) * k;
        if (a <= n)
            ans = min(ans, abs(x - a));
        int b = a + k;
        if (b <= n)
            ans = min(ans, abs(x - b));

        cout << ans ;
        nl
    }
    return 0;
}
