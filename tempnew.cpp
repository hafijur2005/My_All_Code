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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, c;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int z;
            cin >> z;
            st.insert(z);
        }
        cin >> c;
        sort(c.begin(), c.end());
        int i = 0;
        for (int it : st)
        {
            s[it-1] = c[i];
            i++;
        }
        cout << s;
        nl
    }

    return 0;
}