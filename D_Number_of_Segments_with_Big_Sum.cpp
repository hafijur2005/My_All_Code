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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = INT_MAX;
    ll l = 0, sum = 0,count=0;

    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum >= s)
        {
            ans = min(ans, i - l + 1);
            sum -= arr[l];
            count++;
            l++;
        }
    }

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << count;

    return 0;
}