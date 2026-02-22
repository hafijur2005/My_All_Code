#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<char> s;
        vector<char> s2;
        string s1;
        cin >> s1;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
                s.push_back(s1[i]);
        }
        int x;
        bool flag = false;
        s2.push_back(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if ((s[i] == s[i - 1]) && !flag)
            {
                char z = s[i] + 1;
                s2.push_back(z);
                flag = true;
            }
            s2.push_back(s[i]);
        }
        if (!flag)
        {
            if (s2[s.size() - 1] != 'z')
            {
                char z = s2[s.size() - 1] + 1;
                s2.push_back(z);
            }
            else
            {
                char z = s2[s.size() - 1] - 1;
                s2.push_back(z);
            }
        }

        for (int i = 0; i < s2.size(); i++)
            cout << s2[i];

        cout << "\n";
    }
    return 0;
}

