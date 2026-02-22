#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    ans=n/5;
    if(n%5!=0)
    {
        ans=ans+1;
    }
 
    cout<<ans;
    return 0;
}