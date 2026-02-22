#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int last = -n % 10;
    int p_last = -(n % 100) / 10;
    if (n >= 0)
        cout << n;
    else
    {
        if (last >= p_last)
        {
            cout << n / 10;
        }
        if (last < p_last)
        {
            n /= 100;
            n = n * 10 - last;
            cout << n;
        }
    }

    return 0;
}