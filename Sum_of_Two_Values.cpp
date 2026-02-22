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

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    bool flag = false;

    for (auto z = mp.begin(); z != mp.end(); z++)
    {
        int val = x - z->first;
        auto y = mp.find(val);

        if (y != mp.end())
        {
            if (y == z && y->second.size() < 2)
                continue;

            int a = z->second[0] + 1;
            int b;
            if (y == z)
                b = y->second[1] + 1;

            else
                b = y->second[0] + 1;

            cout << min(a, b) << " " << max(a, b);
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << "IMPOSSIBLE";

    return 0;
}
