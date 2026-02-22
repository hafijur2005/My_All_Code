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
    int n, max = 0, g = 0;
    ll sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (max < v[i])
            max = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = max - v[i];
        sum += v[i];
        g = __gcd(g, v[i]);
    }
    cout << sum / g << " " << g;
    return 0;
}