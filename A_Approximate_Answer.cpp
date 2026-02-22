#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    int dif = abs(x - y);
    if (dif <= k)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}