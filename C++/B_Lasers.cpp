#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int cnt= 0;
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int arr1[n],arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0;  i< m; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] <= y)
            {
                cnt++;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (arr2[i] <= x)
            {
                cnt++;
            }
        }
        cout << cnt<< endl;
    }

    return 0;
}