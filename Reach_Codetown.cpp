#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
bool isvowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main()
{
    fast;
    int t;
    cin >> t;
    string target = "CODETOWN";
    while (t--)
    {
        string s;
        cin >> s;

        bool ok = true;
        for (int i = 0; i < 8; i++)
        {
            if (isvowel(s[i]) != isvowel(target[i]))
            {
                ok = false;
                break;
            }
        }

        if (ok)
            yes
        else
            no
    }

    return 0;
}