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
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = 0, size = 0, l = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > s)
        {

            sum -= arr[l];
            l++;
        }
        else
        {
            if (i - l + 1 > size)
                size = i - l + 1;
        }
    }
    cout << size;
    return 0;
}