#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,count1=0,count2=0;
        cin >> n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==0)
            {
                count1++;
            }
            else
            {
                count1=0;
            }
            if(count1==k)
            {
                count2++;
                count1=0;
                i++;
            }
        }
        cout<<count2<<endl;
    }

    return 0;
}