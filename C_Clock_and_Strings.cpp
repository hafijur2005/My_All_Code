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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx1 = max(a, b);
        int mn1 = a + b - mx1;
        vector<bool> flag(13, false);
        for (int i = mn1+1; i < mx1; i++)
            flag[i] = true;
        if(flag[c]==flag[d])
            no
        else
            yes
    }
    return 0;
}
