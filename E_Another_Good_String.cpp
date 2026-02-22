#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int current_len = 1, max_len = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                current_len++;
            else
                current_len = 1;
            max_len = max(max_len, current_len);
        }

        cout << max_len << " "; 

        for (int i = 0; i < q; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);

            int sz = s.size();
            if (sz > 1 && s[sz - 1] == s[sz - 2])
            {
                current_len++;
            }
            else
            {
                current_len = 1;
            }
            max_len = max(max_len, current_len);

            cout << max_len << " ";
        }
        nl
    }

    return 0;
}