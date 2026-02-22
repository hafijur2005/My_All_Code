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
        ll b;
        cin >> n >> b;

        ll maxArea = 0;

        for (int i = 0; i < n; i++)
        {
            ll w, h, p;
            cin >> w >> h >> p;

            if (p <= b)
            {
                ll area = w * h;
                maxArea = max(maxArea, area);
            }
        }

        if (maxArea == 0)
            cout << "no tablet";
        else
            cout << maxArea;
        nl
    }

    return 0;
}
