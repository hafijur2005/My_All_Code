#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr1[n], arr2[n];
        bool flag0 = false, flag1 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (i % 2 == 0 && arr1[i] == '0')
                flag0 = true;
            if (i % 2 == 1 && arr1[i] == '0')
                flag1 = true;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (i % 2 == 1 && arr2[i] == '0')
                flag0 = true;
            if (i % 2 == 0 && arr2[i] == '0')
                flag1 = true;
        }
        if(flag0&&flag1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}