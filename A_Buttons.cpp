#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << a * 2;
    else
    {
        int c = max(a, b);
        cout << 2 * c - 1;
    }

    return 0;
}