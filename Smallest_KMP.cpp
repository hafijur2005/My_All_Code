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
        string s, p;
        cin >> s >> p;

        vector<int> v1(26, 0), v2(26, 0);

        for (char c : s)
            v1[c - 'a']++;
        for (char c : p)
            v2[c - 'a']++;

        for (int i = 0; i < 26; i++)
            v1[i] -= v2[i];

        string left = "", right = "";
        char first = p[0];

        for (int i = 0; i < 26; i++)
        {
            char c = char('a' + i);
            if (c < first)
                left += string(v1[i], c);
            else if (c > first)
                right += string(v1[i], c);
        }

        string mid = "";
        mid += string(v1[first - 'a'], first);

        string op1 = left + p + mid + right;
        string op2 = left + mid + p + right;

        cout << min(op1, op2) << "\n";
    }
    return 0;
}
