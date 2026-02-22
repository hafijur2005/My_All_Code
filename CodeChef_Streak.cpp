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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int om_max = 0, addy_max = 0;
        int cur = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                cur++;
            else
                cur = 0;
            om_max = max(om_max, cur);
        }

        cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] > 0)
                cur++;
            else
                cur = 0;
            addy_max = max(addy_max, cur);
        }

        if (om_max > addy_max)
            cout << "Om";
        else if (addy_max > om_max)
            cout << "Addy";
        else
            cout << "Draw";
        nl
    }

    return 0;
}
