#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = 0;
        for (int i = 2; i < s.size(); i++)
        {
            if (s[i - 2] == 'F' && s[i - 1] == 'F' && s[i] == 'T')
                flag == 1;
        }
        if (flag)
            cout << s << endl;
        else
        {
            sort(s.begin(), s.end());
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == 'F' && s[i - 1] == 'T')
                {
                    if (s[0] != 'F')
                    {
                        swap(s[0], s[i]);
                    }
                }
            }
            cout << s << endl;
        }
    }

    return 0;
}