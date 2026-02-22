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
        int s, k, m;
        cin >> s >> k >> m;
        int x = m / k;
        if (k > s)
        {
            int z = s - (m - k * x);
            if (z < 0)
                cout << "0";
            else
                cout << z;
        }

        else if (k != 1)
        {
            if (x % 2 == 1)
            {
                int z = (k - (m - k * x));
                if (z < 0)
                    cout << "0";
                else
                    cout << z;
            }
            else
            {
                int z = ((s - k) - (m - k * x));
                if (z < 0)
                    cout << "0";
                else
                    cout << z;
            }
        }
        else
            cout << s;

        nl
    }

    return 0;
}