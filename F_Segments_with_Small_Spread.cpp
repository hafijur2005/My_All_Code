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
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    multiset<ll> ms;
    ll l = 0, ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ms.insert(a[i]);
        while (*ms.rbegin() - *ms.begin() > s)
        {
            ms.erase(ms.find(a[l]));
            l++;
        }
        ans += (i - l + 1);
    }

    cout << ans;
    nl 
    return 0;
}
