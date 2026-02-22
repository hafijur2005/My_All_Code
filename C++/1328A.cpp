#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,a,b,ans;
    while (cin>>n)
    {
        while (n--)
        {
            ans=0;
            cin>>a>>b;
            if(a%b==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                d=(a/b+1)*b;
                ans=d-a;
                cout<<ans<<endl;
            }
            
        }
    }
    
    return 0;
}