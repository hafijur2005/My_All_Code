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
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        mx = max(mx, v[i].second);
    }

    vector<int> time(mx + 2, 0);

    for (int i = 0; i < n; i++)
    {
        time[v[i].first]++;
        time[v[i].second + 1]--;
    }

    int ans = 0;
    for (int i = 1; i <= mx; i++)
    {
        time[i] += time[i - 1];
        ans = max(ans, time[i]);
    }

    cout << ans;
    return 0;
}
