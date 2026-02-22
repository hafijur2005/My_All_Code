#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        bool flag = false;
        for (int i = 1; !flag && i < s.size(); i++)
        {
            if (s[i - 1] == s[i])
            {
                flag = true;
                count = i;
                break;
            }
        }
        if (!flag)
        {
            cout << (s[0] == 'a' ? 'b' : 'a') << s << '\n';
        }
        else
        {
            cout << s.substr(0, count) << (s[count - 1] == 'a' ? 'b' : 'a') << s.substr(count, s.size()) << '\n';
        }
    }

    return 0;
}
