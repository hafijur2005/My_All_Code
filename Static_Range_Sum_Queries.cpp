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
    int n, q;
    cin >> n >> q;
    ll arr[n], sum[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + arr[i];
    
    for (int i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
            cout << sum[b - 1];
        else
            cout << sum[b - 1] - sum[a - 2];
        nl
    }

    return 0;
}