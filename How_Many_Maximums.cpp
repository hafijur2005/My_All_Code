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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            bool ok = true;
            if (i > 0 && s[i - 1] == '1')
                ok = false;
            if (i < n - 1 && s[i] == '0')
                ok = false;
            if (ok)
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
