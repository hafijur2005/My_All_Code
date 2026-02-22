#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int n;
    cin >> n;
    stack<string> st;
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    while (!st.empty())
    {
        string x = st.top();
        if (!mp[x])
        {
            int len = x.size();
            cout << x.substr(len - 2, 2);
            mp[x] = true;
        }
        st.pop();
    }

    return 0;
}
