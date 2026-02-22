#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0, l = 0;
    map<int, int> mp;

    for (int r = 0; r < n; r++)
    {
        if (mp.count(arr[r]))
            l = max(l, mp[arr[r]] + 1);

        mp[arr[r]] = r;
        ans = max(ans, r - l + 1);
    }

    cout << ans;
    return 0;
}
