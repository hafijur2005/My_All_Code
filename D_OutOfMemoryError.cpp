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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        ll h;
        cin >> n >> m >> h;

        vector<ll> v1(n), v2(n),v3(n,-1);
        for (int i = 0; i < n; i++)
            cin >> v1[i];

        v2 = v1;
        int x = -1;
        for (int i = 0; i < m; i++)
        {
            ll b, c;
            cin >> b >> c;
            b--;
            if (v3[b] < x)
                v2[b] = v1[b];

            if (v2[b] + c > h)
                x = i;
            else
            {
                v2[b] += c;
                v3[b] = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v3[i] < x)
                cout << v1[i] << " ";
            else
                cout << v2[i] << " ";
        }
        nl
    }
    return 0;
}
