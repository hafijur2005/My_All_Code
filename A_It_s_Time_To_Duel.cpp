#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,cout0=0,count1=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0) cout0++;
            else count1++;
        }
        if(cout0>n/2)
        {
            cout<<"NO"<<endl;
        }
        else if(count1>n/2) cout<<"NO1"<<endl;
        else if(n%2!=0) cout<<"NO2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        t--;
    }
 
    return 0;
}