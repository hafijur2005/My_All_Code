#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
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
        vector<int> v1(n), v2(n + 1), v3(n, 1);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        for (int i = 0; i < n; i++)
            v2[v1[i]] = i;

        int count = 0;

        for (int i = n; i >= 1; i--)
        {
            int idx = v2[i];

            int l = 0;
            for (int j = idx - 1; j >= 0; j--)
                if (v3[j])
                    l++;

            int r = 0;
            for (int j = idx + 1; j < n; j++)
                if (v3[j])
                    r++;

            count += min(l, r);
            v3[idx] = 0;
        }

        cout << count << "\n";
    }
    return 0;
}