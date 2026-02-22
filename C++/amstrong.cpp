#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y=0,sum=0,z;
    cin>>n;
    x=n;
    while(x)
    {
        y++;
        x=x/10;
    }
    while(n)
    {
        int num=n%10;
        sum=sum+pow(num,y);
        n=n/10;
    }
    cout<<sum;
    return 0;
}