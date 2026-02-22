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
        int n, q;
        cin >> n >> q;
        vector<int> candi(n);
        for (int i = 0; i < n; i++)
            cin >> candi[i];

        sort(all(candi), greater<int>());

        for (int i = 1; i < n; i++)
            candi[i] += candi[i - 1];

        while (q--)
        {
            int x;
            cin >> x;

            int low = 0, high = n - 1;
            int ans = -1;

            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (candi[mid] >= x)
                {
                    ans = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            if (ans != -1)
                cout << ans + 1;
            else
                cout << -1;
            nl
        }
    }
    return 0;
}
