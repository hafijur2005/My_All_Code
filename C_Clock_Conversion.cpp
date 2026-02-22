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
        string s, hs, ms, ans;
        cin >> s;
        hs = s.substr(0, 2);
        ms = s.substr(3, 5);
        int hi = stoi(hs);
        if (hi > 12)
        {
            hi -= 12;
            hs = to_string(hi);
            if (hi < 10)
                ans = "0" + hs + ":" + ms + " PM";
            else
                ans = hs + ":" + ms + " PM";
        }
        else
        {
            if (hi == 12)
                ans = hs + ":" + ms + " PM";
            else if (hi == 0)
                ans = "12:" + ms + " AM";
            else
                ans = hs + ":" + ms + " AM";
        }
        cout << ans;
        nl
    }

    return 0;
}