#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n) % 10 << "\n";
    }
    return 0;
}