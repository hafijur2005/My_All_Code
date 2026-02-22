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
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long g1 = 0, g2 = 0;

        for (int i = 0; i < n; i += 2)
            g1 = __gcd(g1, arr[i]);

        for (int i = 1; i < n; i += 2)
            g2 = __gcd(g2, arr[i]);

        bool ok1 = true;
        for (int i = 1; i < n; i += 2)
            if (arr[i] % g1 == 0)
                ok1 = false;

        bool ok2 = true;
        for (int i = 0; i < n; i += 2)
            if (arr[i] % g2 == 0)
                ok2 = false;

        if (ok1)
            cout << g1;
        else if (ok2)
            cout << g2;
        else
            cout << 0;

        nl
    }
    return 0;
}
