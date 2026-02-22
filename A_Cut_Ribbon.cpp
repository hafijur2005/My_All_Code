#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d, count = 0;
    cin >> n >> a >> b >> c >> d;
    if (a == n||b==n||c==n)
        count++;
    if (a + b == n)
        count++;
    if (a + c == n)
        count++;
    if (b + c == n)
        count++;

        cout<<count;
    return 0;
}