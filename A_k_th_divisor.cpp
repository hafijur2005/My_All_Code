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
    ll a, b;
    cin >> a >> b;
    vector<ll> v;
    for (ll i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
            if (a / i != i)
                v.push_back(a / i);
        }
    }
    sort(v.begin(), v.end());
    if (b > v.size())
    {
        cout << "-1";
    }
    else
        cout << v[b - 1];
    return 0;
}