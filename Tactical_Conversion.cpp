#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1' && a[i - 1] == '1')
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}