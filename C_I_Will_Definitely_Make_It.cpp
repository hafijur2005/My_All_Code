#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n, k;
        cin >> n >> k;

        vector<long> h(n);
        for (long &height : h)
        {
            cin >> height;
        }

        long sh = h[k - 1];
        sort(h.begin(), h.end());

        bool possible = true;
        for (long i = 1; i < n && possible; ++i)
        {
            if (sh > h[i])
            {
                continue;
            }
            if (h[i] > h[i - 1] + sh)
            {
                possible = false;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}