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
        cin >> n;
        int arr[n + 1];
        vector<int> v;
        for (int i = 0; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
            v.push_back(max(arr[i - 1], arr[i]));

        sort(all(v));
        cout << v[0];
        nl
    }

    return 0;
}