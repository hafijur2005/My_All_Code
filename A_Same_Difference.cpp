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
        int n;
        cin >> n;
        string s;
        cin >> s;
        char x = s[n - 1];
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != x)
                cnt++;
        }
        cout << cnt;
        nl
    }
    return 0;
}
