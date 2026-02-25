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
        int n, s;
        cin >> n >> s;
        int six = 0;
        if (s > 5 * n)
            six = s - 5 * n;
        int ans = 6 * n - six;
        cout << ans;
        nl
    }

    return 0;
}