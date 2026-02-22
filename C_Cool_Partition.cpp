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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }

        set<int> s1;
        set<int> s2;
        int ans = 1;

        s1.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            auto it = s1.find(v[i]);
            if (it != s1.end())
            {
            
                s1.erase(it);
                s2.insert(v[i]);
            }
            else
            {
                s2.insert(v[i]);
            }

            if (s1.empty())
            {
                ans++;
                s1 = s2;
                s2.clear();
            }
        }

        cout << ans << '\n';
    }

    return 0;
}