#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, neg = 0, pos = 0, dif, count = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == -1)
        {
            dif = pos + n;
            if (dif < 0)
            {
                count++;
                dif = 0;
            }
            else
            {
                pos = pos + n;
            }
        }
        else
        {
            pos += n;
        }
    }
    cout << count;

    return 0;
}