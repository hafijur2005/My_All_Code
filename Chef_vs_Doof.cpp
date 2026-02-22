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

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                flag = true;
        }

        if (flag)
            no
        else
            yes
    }
    return 0;
}