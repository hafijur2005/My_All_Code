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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int pre[n + 1] = {0};
        for (int i = 0; i < n; i++)
            pre[i + 1] = v[i];

        for (int i = 1; i < n; i++)
        {
            int S = pre[i - 1] + pre[i];
            if (2 * pre[i - 1] == S)
            {
                if (i + 1 <= n)
                    swap(pre[i], pre[i + 1]);
            }
        }

        for (int i = 1; i <= n; i++)
            cout << pre[i] << " ";
        nl
    }
    return 0;
}
