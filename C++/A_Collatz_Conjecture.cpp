#include <bits/stdc++.h>
using namespace std;

int reverce_p(int k, int x)
{
    while (k--)
    {
        bool flag = false;
        int even = x * 2;

        if ((x - 1) % 3 == 0)
        {
            int odd = (x - 1) / 3;
            if (odd % 2 == 1)
            {
                x = odd;
                flag = true;
            }
        }

        if (!flag)
        {
            x = even;
        }
    }

    return x;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, x;
        cin >> k >> x;

        int ans = reverce_p(k, x);
        cout << ans << endl;
    }

    return 0;
}
