#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, x, y, big, small;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> y;
        big = max(x, y);
        small = min(x, y);
        if (a > small && a < big)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    return 0;
}