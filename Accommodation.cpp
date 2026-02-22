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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        if (x + y > n)
        {
            cout << "-1";
        }
        else
        {
            ll r = ceill((b + g) * 1.0 / n * 1.0);
            bool flag1 = false;
            bool flag2 = false;
            if (r * x <= b)
                flag1 = true;
            if (r * y <= g)
                flag2 = true;
            if (flag1 && flag2)
                cout << r;
            else
                cout << "-1";
        }
        nl
    }
    return 0;
}
