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
        int n, x;
        cin >> n >> x;
        char arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int y = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (y == 0 && arr[i] == '0')
            {
                flag = false;
            }
            if (y != 0 && arr[i] == '0')
                y--;
            if (arr[i] == '1')
                y = x;
        }
        if(flag)
            yes
        else 
            no
    }

    return 0;
}