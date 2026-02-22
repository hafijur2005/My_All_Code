#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int mid = x * y / 2;
        if (z > mid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
