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
        int x;
        cin >> x;
        if (x == 0)
        {
            cout << 0 << " " << 0 << "\n";
            continue;
        }
        int k = 63 - __builtin_clzll(x);
        int A = x & ~(1LL << k);
        int B = A ^ x;
        cout << A << " " << B << "\n";
    }

    return 0;
}