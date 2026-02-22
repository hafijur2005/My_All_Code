#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        while (n > 1)
        {
            if (n % 2 != 0)
            {
                n = n - 3;
                if (n < 1)
                    break;
            }
            n /= 2;
        }
        

        if (n==1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
