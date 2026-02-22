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
        string s;
        cin >> s;
        sort(all(s));
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<"Yes";
        else
            cout<<"No";
        nl
    }

    return 0;
}