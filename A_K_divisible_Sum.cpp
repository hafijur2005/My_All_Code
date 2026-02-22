#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a,n,k;
        cin >> n >> k;
        a = ceil(n  / k);
        k = k * a;
        int ans = ceil(k  / n);
        cout << ans << endl;
    }
    return 0;
}