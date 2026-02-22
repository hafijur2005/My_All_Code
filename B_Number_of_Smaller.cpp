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
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    vector<int> ans(m);
    int j = 0; 

    for (int i = 0; i < m; i++)
    {
        while (j < n && a[j] < b[i])
            j++;   
        ans[i] = j; 
    }

    for (int i = 0; i < m; ++i)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}