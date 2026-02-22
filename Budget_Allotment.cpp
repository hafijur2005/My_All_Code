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
        int n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll surplus = 0;
        int cnt = 0;
        vector<ll> need;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                cnt++;
                surplus += a[i] - x;
            }
            else
            {
                need.push_back(x - a[i]);
            }
        }

        sort(all(need));

        for (ll d : need)
        {
            if (surplus >= d)
            {
                surplus -= d;
                cnt++;
            }
            else
                break;
        }
        cout << cnt;
        nl
    }
    return 0;
}
