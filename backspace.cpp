#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            st.pop();
        }
        else
            st.push(s[i]);
    }
    vector<char> v;
    for (int i = st.size() - 1; i >= 0; i--)
    {
        v.push_back(st.top());
        st.pop();
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    return 0;
}