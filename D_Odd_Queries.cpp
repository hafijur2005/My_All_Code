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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n+1];
        arr[0]=0;
        for (ll i = 1; i <=n; i++)
        {
            cin >> arr[i];
            arr[i]+=arr[i-1];
        }
        ll sum=arr[n];

        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll neg = arr[r] - arr[l-1];
            long long temp = sum - neg + 1LL*(r-l+1)*k;

            if(temp % 2 == 1)
                yes
            else
                no
        }
    }

    return 0;
}
