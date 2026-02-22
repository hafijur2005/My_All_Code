#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
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
        multiset<int> ms;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ms.insert(a);
            s.insert(a);
        }

        int ans = 0;
        while (!ms.empty())
        {
            auto it = s.begin();
            vector<int> v;

            while (it != s.end())
            {
                v.push_back(*it);
                auto nextIt = next(it);
                if (nextIt == s.end() || *nextIt != *it + 1)
                    break;
                it = nextIt;
            }
            for (int x : v)
            {
                ms.erase(ms.find(x));
                if (ms.count(x) == 0)
                    s.erase(x);
            }

            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}
