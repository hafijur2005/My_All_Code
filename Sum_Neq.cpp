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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 4)
        {
            if (a[0] + a[1] != a[2] + a[3])
                yes 
            else 
                no
        }
        else
        {
            bool flag = true;
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                no 
            else 
                yes
        }
    }
    return 0;
}
