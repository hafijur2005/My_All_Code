#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 1;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                count++;
            else
                flag = true;
        }
        if (s[0] != s[n - 1] && flag)
            count++;
        cout << count;
        nl
    }
    return 0;
}
