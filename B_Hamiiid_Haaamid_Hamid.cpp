#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        bool flag = true;
        cin >> n >> x;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '#')
            {
                flag = false;
            }
        }
        int a,b;
        a=n - x + 1;
        b=min(a,x);
        if (x == 1 || x == n || flag)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    return 0;
}
