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
        long long l, r;
        cin >> l >> r;

        if (2 * l > r)
            cout << -1 << " " << -1 ;
        else
            cout << l << " " << 2 * l ;
        nl
    }
    return 0;
}