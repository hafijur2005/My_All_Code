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
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
            mp[c]++;

        bool ok = true;
        for (auto it : mp)
        {
            if (it.second > 2)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            yes else no
    }
    return 0;
}
