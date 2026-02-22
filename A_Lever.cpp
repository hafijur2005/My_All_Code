#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0, dif;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            dif = arr1[i] - arr2[i];
            if (dif > 0)
            {
                dif = dif + 1;
            }
            else
            {
                dif = -dif - 1;
            }
            if (dif > max)
                max = dif;
        }
        if (max == 0)
            max++;
        cout << max << endl;
    }
    return 0;
}