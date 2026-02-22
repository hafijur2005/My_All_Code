#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "Yes\n";
#define no cout << "No\n";
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll min = a[0];
        ll gcd = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] % min == 0)
            {
                gcd = __gcd(gcd, a[i]);
            }
        }
        if (gcd == min)
            yes 
        else 
            no
    }
    return 0;
}