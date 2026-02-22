#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

bool vl(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
    int t;
    cin >> t;
    string target = "CODETOWN";
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = true;

        for (int i = 0; i < 8; i++)
        {
            if (vl(s[i]) != vl(target[i]))
            {
                flag = false;
                break;
            }
        }
        if(flag)
            yes
        else
            no
    }

    return 0;
}