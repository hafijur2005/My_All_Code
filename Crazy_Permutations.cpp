#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
int sign(int x)
{
    if (x > 0)
        return 1;
    if (x < 0)
        return -1;
    return 0;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr1(n), arr2(n);
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        if (n == 1)
            cout << "Yes\n";
        else
        {
            bool flag = true;
            for (int i = 0; i + 1 < n; i++)
            {
                int s1 = sign(arr1[i + 1] - arr1[i]);
                int s2 = sign(arr2[i + 1] - arr2[i]);
                if (s1 == 0 || s2 == 0 || s1 != s2)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                cout << "Yes";
            else
                cout<<"No";
            nl
        }
    }
    return 0;
}
