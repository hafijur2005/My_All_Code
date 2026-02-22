#include <bits/stdc++.h>
using namespace std;
int main ()
{
 int n,x,ans,a[4],i;
    while (cin>>n)
    {
        x=0;
        while (n--)
        {
            ans=0;
            for (i=0;i<3;i++)
            {
                cin>>a[i];
                if (a[i]==1)
                    ans++;
            }
            if (ans>=2)
                x++;
        }
        cout<<x<<endl;
    }
    return 0;
}