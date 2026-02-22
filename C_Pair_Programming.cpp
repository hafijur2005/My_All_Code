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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];

        int i = 0, j = 0;
        int l = k;
        vector<int> ans;

        bool flag = true;
        while (i < n || j < m)
        {
            bool flagA = false, flagB = false;

            if (i < n && (a[i] == 0 || a[i] <= l))
                flagA = true;
            if (j < m && (b[j] == 0 || b[j] <= l))
                flagB = true;

            if (!flagA && !flagB)
            {
                flag = false;
                break;
            }
            if (flagA && (!flagB || a[i] == 0))
            {
                ans.push_back(a[i]);
                if (a[i] == 0)
                    l++;
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                if (b[j] == 0)
                    l++;
                j++;
            }
        }

        if (!flag)
            cout << -1;
        else
        {
            for (int x : ans)
                cout << x << " ";
        }
        nl
    }
    return 0;
}