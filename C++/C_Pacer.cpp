#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<pair<long long, int>> req;
        req[0] = {0, 0};
        for (int i = 1; i <= n; i++)
        {
            cin >> req[i].first >> req[i].second;
        }

        long long ans = 0;
        bool flag= true;

        for (int i = 1; i <= n; i++)
        {
            long long gap = req[i].first - req[i - 1].first;
            long long dist = abs(req[i].second - req[i - 1].second);

            if (dist > gap || ((gap - dist) % 2 != 0))
            {
                flag= false;
                break;
            }
            ans += gap;
        }

        if (!flag)
        {
            cout << -1 << "\n";
            continue;
        }

        long long last_gap = m - req[n].first;
        ans += last_gap;

        cout << ans << "\n";
    }
    return 0;
}
