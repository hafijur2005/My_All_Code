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
    int n, k;
    cin >> n >> k;
    multimap<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (mp.count(x)==0 )
        {
            mp.insert({x, i});
        }
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        auto it = mp.lower_bound(x);
        if (it!=mp.end())
        {
            cout << it->second + 1;
        }
        else
            cout << n+1;

        nl
    }

    return 0;
}