#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a % 2 == 0)
    {
        if (b % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (a * b) / 2 + 2 << endl;
        }
    }
    else
    {
        if (b % 2 != 0)
        {
            cout << a * b + 1 << endl;
        }
        else
        {
            long long temp = b;
            int v2 = 0;
            while (temp > 0 && temp % 2 == 0)
            {
                temp /= 2;
                v2++;
            }
            if (v2 == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << (a * b) / 2 + 2 << endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
