#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false),cin.tie(nullptr)
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<"\n";

int main()
{
    fast;
int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << -1 ;
            nl
            continue;
        }

        if (n == 1)
        {
            cout << 1 ;
            nl
            continue;
        }

        if (n % 2 == 1)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
        }
        else
        {
            int l = 2, r = n - 1;
            cout << n << " ";
            while (l <= r)
            {
                cout << l << " ";
                if (l != r) cout << r << " ";
                l++;
                r--;
            }
            cout << 1;
        }
        nl
    }
    return 0;
}
