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
        int n;
        cin >> n;
        int x = n / 2 + 1;
        cout << x << " ";
        if (n % 2 == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int j = i + 1;
                if (j % 2 == 0)
                {
                    cout << x - j << " ";
                    x = x - j;
                }
                else
                {
                    cout << x + j << " ";
                    x = x + j;
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                int j = i + 1;
                if (j % 2 == 0)
                {
                    cout << x + j << " ";
                    x = x + j;
                }
                else
                {
                    cout << x - j << " ";
                    x = x - j;
                }
            }
        }
        nl
    }
    return 0;
}