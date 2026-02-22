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
        ll n;
        cin >> n;
        ll ans = 0;
        if (n <= 3)
        {
            ans = 0;
        }
        else if (n % 2 == 0)
        {
            ll x = n / 2;
            ans = (x - 1) * (x - 1);
        }
        else
        {
            ll x = (n - 1) / 2;
            ans = x * (x - 1);
        }
        cout << ans;
        nl
    }
    return 0;
}
