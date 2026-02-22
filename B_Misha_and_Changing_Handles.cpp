#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    map<string, string> mp1, mp2;
    vector<string> v, v2;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp1[s1] = s2;
        v.push_back(s1);
    }
    while (1)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (mp1.count(mp1[v[i]]) == 1)
            {
                mp2[v[i]] = mp1[mp1[v[i]]];
                v2.push_back(v[i]);
                mp1[mp1[v[i]]] = "-1";
                mp1[v[i]] = "-1";
                count++;
            }

        }
    }
    cout << n - count << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        if (!mp2[v2[i]].empty())
        {
            cout << v2[i] << " " << mp2[v2[i]] << endl;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (mp1[v[i]] != "-1")
        {
            cout << v[i] << " " << mp1[v[i]] << endl;
        }
    }
    return 0;
}