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
        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                int x = 2 * (i / 2 + 1);
                if (i % 2 != 0)
                    x--;
                v.push_back(x);
            }
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
        }
        else
        {
            for (int i = n; i > 0; i--)
                cout << i << " ";
        }
        nl
    }

    return 0;
}