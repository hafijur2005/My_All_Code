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
        int x, y;
        cin >> x >> y;
        if (y % 2 == 0)
        {
            if (x % 2 == 0)
                cout << "Bob";
            else
                cout << "Alice";
        }
        else
        {
            if (x % 2 == 0)
                cout << "Bob";
            else
                cout << "Alice";
        }
        nl
    }

    return 0;
}