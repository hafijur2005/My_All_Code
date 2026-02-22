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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> freq;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && a[j] == a[i])
                j++;
            freq.push_back(j - i);
            i = j;
        }
        int ans = 0;
        for (int x : freq)
        {
            int cnt = 0;
            for (int y : freq)
            {
                if (y >= x)
                    cnt++;
            }
            ans = max(ans, cnt * x);
        }
        cout << ans ;
        nl
    }
    return 0;
}
