#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n*2];
    for(int i=0; i<n*2; i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n*2;i++)
    {
        for(int j=0;j<n*2;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            j++;
        }
        i++;
    }
    cout<<count;
 
 
    return 0;
}