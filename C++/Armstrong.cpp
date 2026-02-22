#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,temp,count=0,sum=0,rim;
    cin>>n;
    a=n;
    temp=n;
    while (n)
    {
        n=n/10;
        count++;
    }
    
    while (a)
    {
        rim=a%10;
        sum=sum+pow(rim,count);
        a=a/10;
    }
    if(sum==temp)
    {
        cout<<"The number is a Armstrong Number";
    }
    else
    {
        cout<<"The number is not a Armstrong Number";
    }
    
 
    return 0;
}