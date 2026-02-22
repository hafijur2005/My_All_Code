#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
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
        vector<int> v(n), v2;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(all(v));

        v2.push_back(v[0]);
        for (int i = 1; i < n; i++)
            if (v[i] != v[i - 1])
                v2.push_back(v[i]);

        int mx = 1, count = 1;

        for (int i = 1; i < v2.size(); i++)
        {
            if (v2[i] - 1 == v2[i - 1])
                count++;
            else
            {
                mx = max(mx, count);
                count = 1;
            }
        }

        mx = max(mx, count);
        cout << mx;
        nl
    }

    return 0;
}
