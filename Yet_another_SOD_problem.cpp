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
        long long L, R;
        cin >> L >> R;

        long long ans = (R / 3) - ((L - 1) / 3);
        cout << ans ;
        nl
    }
    return 0;
}
