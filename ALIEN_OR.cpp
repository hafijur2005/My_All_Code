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
        int n, k;
        cin >> n >> k;
        vector<int> v(k, 0);
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            int count = 0, pos = -1;
            for (int j = 0; j < k; ++j)
            {
                if (s[j] == '1')
                {
                    count++;
                    pos = j;
                }
            }
            if (count == 1)
                v[pos] = 1;
        }
        bool flag = true;
        for (int j = 0; j < k; ++j)
            if (!v[j])
            {
                flag = false;
                break;
            }
        if (flag)
            yes 
        else 
            no
    }
    return 0;
}
