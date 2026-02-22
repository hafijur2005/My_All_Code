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
        char arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans;
        bool flag = false;
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (arr[i] == arr[j])
            {
                ans = j - i + 1;
                flag = true;
                break;
            }
        }
        if (flag)
            cout << ans;
        else
            cout << "0";
        nl
    }
    queue<int>q;
    q.pop();
    return 0;
}