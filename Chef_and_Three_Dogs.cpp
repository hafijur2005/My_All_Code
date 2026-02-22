#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    cout << fixed << setprecision(7);

    while(t--)
    {
        double s, v;
        cin >> s >> v;
        double time = (2.0 * s) / (3.0 * v);
        cout << time << '\n';
    }
    return 0;
}
