#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int arr1[n],arr[n/2],arr2[n/2];
        for (int i = 0; i < n ; i++)
        {
            cin >> arr1[i];
        }
        
        //for(int i=0;i<n/2;i++)
        // for (int i = 0,j=n-1; i < n / 2; i++,j--)
        // {
        //     if (arr1[i] == arr1[j])
        //     {
        //         count++;
        //         cout  <<count<<" "<<arr1[i]<<endl;
        //     }
        // }
        // if (count == k)
        // {cout << "YES" <<count<< endl;}
            
        // else
        //     cout << "NO"<<count << endl;
    }
    return 0;
}
