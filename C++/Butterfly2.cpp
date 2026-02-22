#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            k=i>ceil((2*n-1)/2.0)?(2*n-1)-i+1:i;
            if((k>=j||k>(2*n-1)-j)||(i==ceil((2*n-1)/2.0)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}