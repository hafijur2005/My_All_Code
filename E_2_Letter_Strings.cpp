#include <bits/stdc++.h>
using namespace std;

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
        map<string, int> mp;
        vector<string> st;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            if (mp.count(s) == 1)
            {
                st.push_back(s);
            }
        }
        int count = 0;
        for (int i = 0; i < st.size(); i++)
        {
            for (int j = i; j < st.size()-1; j++)
            {
                if ((st[i][0] == st[j + 1][0] && st[i][1] != st[j + 1][1]) || (st[i][0] != st[j + 1][0] && st[i][1] == st[j + 1][1]))
                {
                    count += mp[st[i]] * mp[st[j + 1]];
                    //cout << st[i] << " " << mp[st[i]] << " " << st[j + 1] << " " << mp[st[j + 1]];
                    //nl
                }
            }
        }
        cout << count;
        nl
    }
    return 0;
}
