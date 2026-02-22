#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {

            if ((a - b == 1) && (a % 2 != 0))
            {
                cout << y << endl;
            }
            else
            {
                int a = -1;
                cout << a << endl;
            }
        }
        else
        {
            long long c = (b - a) * x;

            long long d;
            if ((a % 2) == (b % 2))
            {

                d = (b - a) / 2 * (min(x, y) + x);
            }
            else
            {
                if (a % 2 == 0)
                {
                    d = min(x, y);
                }
                else
                {
                    d = x;
                }
                d += (b - a - 1) / 2 * (min(x, y) + x);
            }
            cout << min(c, d) << endl;
        }
    }
    return 0;
}