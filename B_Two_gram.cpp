#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c, pre;
    cin >> n;
    vector<char> v;
    stack<char> st;
    map<string, int> mp;
    cin >> c;
    pre = c;
    st.push(c);
    for (int i = 1; i < n; i++)
    {
        cin >> c;

        string s = {pre, c};
        mp[s]++;
        pre = c;
    }
    int max = -1;
    string d;
    for (auto i : mp)
    {
        if (i.second > max)
        {
            max = i.second;
            d = i.first;
        }
        //cout << i.first << "->" << i.second << endl;
    }
    cout << d << endl;
    return 0;
}