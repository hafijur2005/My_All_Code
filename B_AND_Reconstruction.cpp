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

        vector<ll> b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }

        vector<ll> a(n);
        a[0] = b[0];
        for (int i = 1; i < n - 1; i++)
        {
            a[i] = b[i - 1] | b[i];
        }
        a[n - 1] = b[n - 2];

        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << -1;
            nl
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << (i + 1 < n ? ' ' : '\n');
            }
        }
    }
    return 0;
}
