#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (mp.find(a)==mp.end())
            {
                mp[a] = {i, i};
            }
            else
            {
                mp[a].second = i;
            }
        }

        while (k--)
        {
            int f, t;
            cin >> f >> t;
            if (mp.find(f) != mp.end() && mp.find(t) != mp.end())
            {
                int x1 = mp[f].first;
                int x2 = mp[t].second;
                if (x1 < x2)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}
