#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum = 0, l = 0, size = -1;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum == x)
            {
                size = max(size, i - l + 1);
            }
            if (sum > x)
            {
                while (sum > x)
                {
                    sum -= v[l];
                    l++;
                }
            }
        }
        if (size != -1)
            cout << n - size;
        else
            cout << size;
        nl
    }

    return 0;
}