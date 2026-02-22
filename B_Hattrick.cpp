#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        char arr[6];
        for (int i = 0; i < 6; i++)
            cin >> arr[i];

        bool flag = false;
        int count = 0;

        for (int i = 0; i < 6; i++)
        {
            if (arr[i] == 'W')
                count++;
            else
                count = 0;

            if (count == 3)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
