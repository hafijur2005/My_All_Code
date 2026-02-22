#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> p;
    for (int i = 0; i < n; i++)
    {
        string s, s1;
        cin >> s >> s1;
        bool flag = false;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i].first == s && p[i].second == s1)
                flag = true;
        }
        if (!flag)
        {
            p.push_back({s, s1});
        }
        
    }
    // for (int i = 0; i < p.size(); i++)
    //         cout << p[i].first << " " << p[i].second << endl;
    cout << p.size();

    return 0;
}