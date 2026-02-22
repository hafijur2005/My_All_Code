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

        vector<ll> a(n);
        ll S = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            S += a[i];
        }

        if (S % n != 0)
        {
            cout << "Impossible\n";
            continue;
        }

        ll mean = S / n;
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == mean)
            {
                ans = i + 1;
                break;
            }
        }

        if (ans == -1)
            cout << "Impossible\n";
        else
            cout << ans << "\n";
    }

    return 0;
}