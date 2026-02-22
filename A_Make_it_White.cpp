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
        string s;
        cin >> s;
        bool flag = true;
        int first = -1, last = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' && flag)
            {
                first = i;
                flag = false;
            }
            if (s[i] == 'B')
            {
                last = i;
            }
        }
        if (first != -1)
        {
            cout << last - first + 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}