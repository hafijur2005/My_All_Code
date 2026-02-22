#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    long long first = 0, second = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            first += s[i] - '0';
        else
            second += s[i] - '0';
    }
    if (first == second)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
