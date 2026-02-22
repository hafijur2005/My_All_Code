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
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        if (m < n * a || m > n * b)
        {
            no
        }
        else
        {
            ll num = m - n * b;
            ll den = a - b;

            if (num % den == 0)
            {
                ll x = num / den;
                if (x >= 0 && x <= n)
                    yes else no
            }
            else
                no
        }
    }
    return 0;
}
