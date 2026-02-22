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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b == l)
                v.push_back(a);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        int count = 0;
        int j = v.size() - 1;
        if (!v.empty())

        {
            while (1)
            {
                sum = sum + v[j];
                j--;
                count++;
                if (k > v.size())
                {
                    if (count == v.size() || j < 0)
                        break;
                }
                else
                {
                    if (count == k || j < 0)
                        break;
                }
            }
            cout << sum;
        }
        else
            cout << "-1";
        nl
    }

    return 0;
}