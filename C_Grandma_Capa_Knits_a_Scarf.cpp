#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1, ans = 0;
    bool isPos = true;
    while (l <= r)
    {

        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else if (s[l] == s[r - 1])
        {
            ans++;
            r--;
        }
        else if (s[l + 1] == s[r])
        {
            ans++;
            l++;
        }
        else
        {
            ans+=2;
            l++;
            r--;
            // isPos = false;
            // break;
            
        }
    }
    if (isPos)
        cout << ans << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    fast;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}