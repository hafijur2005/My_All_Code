#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int ans = ceil(m * 1.0 / a * 1.0);
    if (ans <= n)
        cout << "Yes";
    else
        cout << "No";
}
