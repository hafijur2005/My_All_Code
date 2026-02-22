#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float ans = 0;
    while (t--)
    {
        float a, b;
        cin >> a >> b;
        ans += a * b;
    }
    printf("%.3f", ans);

    return 0;
}