#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        s.push_back(s1);
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}