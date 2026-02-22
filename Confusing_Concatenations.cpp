#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];

        if (n == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        int idx = -1;
        for (int i = 0; i + 1 < n; i++)
        {
            if (c[i] > c[i + 1])
            {
                idx = i;
                break;
            }
        }

        if (idx == -1)
        {
            cout << -1 << "\n";
            continue;
        }

        // A
        cout << idx + 1 << "\n";
        for (int i = 0; i <= idx; i++)
            cout << c[i] << " ";
        cout << "\n";

        // B
        cout << n - idx - 1 << "\n";
        for (int i = idx + 1; i < n; i++)
            cout << c[i] << " ";
        cout << "\n";
    }

    return 0;
}
