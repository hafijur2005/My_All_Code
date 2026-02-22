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
    int n, m;
    cin >> n >> m;

    map<int, int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m1[a]++;
    }
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        m2[b]++;
    }

    long long ans = 0;
    for (auto &p : m1)
    {
        int x = p.first;
        if (m2.count(x))
            ans += 1LL * p.second * m2[x];
    }

    cout << ans;
    return 0;
}