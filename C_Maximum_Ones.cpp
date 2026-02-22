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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        while (k--)
        {
            bool flag = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    s[i] = '1';
                    flag = true;
                    break;
                }
            }
            if (!flag)
                break;
        }
        int one = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                one++;

        cout << one;
        nl
    }
    return 0;
}