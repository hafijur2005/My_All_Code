#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, pnts = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (arr[0] == 0)
        {
            pnts = 1;
            for (int i = 1; i < n; i++)
            {
                if(arr[i]==0)
                {
                    pnts++;
                }
                pnts += arr[i];
            }
        }
        
        else
        {
            for (int i = 0; i < n; i++)
            {
                pnts += arr[i];
            }
        }
        cout << pnts << endl;
    }

    return 0;
}

