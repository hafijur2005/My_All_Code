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
    int T;
    cin >> T;
    while (T--)
    {
        ll N, X, Y;
        cin >> N >> X >> Y;
        ll hv = 2 * (N - 1);
        ll tl = min(X - 1, Y - 1);
        ll tr = min(X - 1, N - Y);
        ll bl = min(N - X, Y - 1);
        ll br = min(N - X, N - Y);

        ll diag = tl + tr + bl + br;

        ll ans = hv + diag;
        cout << ans;
        nl
    }

    return 0;
}