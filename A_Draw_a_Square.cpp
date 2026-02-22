#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,u,d;
        cin>>l>>r>>d>>u;
        if(l==r&&l==d&&l==u)
        {
            float dis=sqrt(2)*l;
            float len=sqrt(u*u+r*r);
            if(dis==len)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }
 
    return 0;
}