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
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = 0, l = 0;
    map<ll, ll> mp;

    for (ll r = 0; r < n; r++)
    {
        mp[arr[r]]++;

        while ((ll)mp.size() > x)
        {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0)
                mp.erase(arr[l]);
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans;
    return 0;
}
