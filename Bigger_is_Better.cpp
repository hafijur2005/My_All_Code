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
        string a;
        cin >> n >> a;

        bool ok = false;
        for (char c : a)
        {
            if (c != 'z')
            {
                ok = true;
                break;
            }
        }

        if (!ok)
        {
            cout << -1;
        }
        else
        {
            cout << string(n, 'z');
        }
        nl
    }
    return 0;
}
