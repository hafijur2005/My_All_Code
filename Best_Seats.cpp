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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int sum = arr[i] + arr[i + 1];
            mn = min(mn, sum);
        }
        cout << mn;
        nl
    }

    return 0;
}
