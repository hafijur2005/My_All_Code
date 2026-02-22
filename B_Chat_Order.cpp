#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<string> st;
    map<string, bool> mp;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
        mp[s] = false;
    }

    while (!st.empty())
    {
        if (mp[st.top()] != true)
        {
            cout << st.top() << endl;
            mp[st.top()] = true;
        }
        st.pop();
    }

    return 0;
}
