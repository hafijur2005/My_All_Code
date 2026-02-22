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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int mn = *min_element(v.begin(), v.end());

        int msb_min;
        if (mn == 0)
            msb_min = 0;
        else
            msb_min = 31 - __builtin_clz(mn);

        vector<bool> pos(msb_min + 1, true);

        for (int i = msb_min; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                if (((v[j] >> i) & 1) != 1)
                {
                    pos[i] = false;   
                }
            }
        }

        ll sum = 0;
        for (int i = 0; i <= msb_min; i++)
        {
            if (pos[i])
            {
                sum += (1LL << i);   
            }
        }

        cout << sum;
        nl
    }
    return 0;
}
