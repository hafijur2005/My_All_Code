#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        s1 = s;
        map<char, string> mp;
        sort(s.begin(), s.end());
        vector<char> s3;
        s3.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                s3.push_back(s[i]);
            }
        }
        for (int i = 0; i < s3.size(); i++)
        {
            mp[s3[i]] = s3[s3.size() - 1 - i];
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << mp[s1[i]];
        }
        cout << endl;
    }

    return 0;
}