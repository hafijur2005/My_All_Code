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
    map<ll, int> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a]++;
        v[b + 1]--;
    }
    int sum = 0;
    bool flag = false;
    for (auto it : v)
    {
        sum += it.second;
        if (sum > 2)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        no 
    else 
        yes
    return 0;
}