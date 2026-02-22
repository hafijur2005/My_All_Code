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
    int z;
    cin >> z;
    while (z--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int t = y * n;
        int ans = x - t;
        if (ans > 0)
            cout << ans;
        else
            cout << "0";
        nl
    }
    return 0;
}