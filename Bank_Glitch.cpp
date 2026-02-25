#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int ans;
        if (y > x)
        {
            int z = a / x;
            int r = a - z * x;
            ans = b + z * y + r;
        }
        else
        {
            ans = a + b;
        }

        cout << ans << endl;
    }
    return 0;
}