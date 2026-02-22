#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        vector<int> v;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(x - a) + abs(y - b);
            v.push_back(dis);
        }
        sort(v.begin(), v.end());
        cout << v[0] << "\n";
    }

    return 0;
}