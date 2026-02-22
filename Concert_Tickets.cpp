#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = mp.upper_bound(x);
        if (it == mp.begin())
        {
            cout << "-1\n";
        }
        else
        {
            if (it->first != x)
                it--;

            cout << it->first << "\n";
            mp[it->first]--;
            if (mp[it->first] == 0)
            {
                mp.erase(it->first);
            }
        }
    }

    return 0;
}
