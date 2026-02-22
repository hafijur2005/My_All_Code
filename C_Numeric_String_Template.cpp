#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            bool flag = true;

            if ((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            map<char, int> mp;
            map<int, char> mp1;

            for (int i = 0; i < n; i++)
            {
                char c = s[i];
                int x = arr[i];

                if (mp.count(c) != 0 && mp[c] != x)
                {
                    flag = false;
                    break;
                }
                if (mp1.count(x) != 0 && mp1[x] != c)
                {
                    flag = false;
                    break;
                }
                mp[c] = x;
                mp1[x] = c;
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
