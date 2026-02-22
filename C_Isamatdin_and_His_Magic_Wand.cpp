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
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even = 0, odd = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == n || odd == n)
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        else
        {
            sort(a, a + n);
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        nl
    }

    return 0;
}