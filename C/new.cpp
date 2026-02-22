#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/2+1;
    for(int i=0;i<=n;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            if(i==a&&j==a) cout<<"X";
            
            if((i==j||i+j==n+1)&&(j!=a))
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

