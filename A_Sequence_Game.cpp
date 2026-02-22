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

        ll mn = LLONG_MAX, mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
        }

        ll x;
        cin >> x;

        if (x >= mn && x <= mx)
            cout << "YES";
        else
            cout << "NO";
        nl
    }
    return 0;
}
