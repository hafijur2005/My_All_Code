#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    x=n;
    while(x)
    {
        int rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    if(sum==n)
    {
        cout<<"Strong Number";
    }
    else{
        cout<<"Strong Number";
    }
    return 0;
}