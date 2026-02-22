#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans1=0,ans2=0,ans3=0,ans=0,i;
    int a[3];

    while (cin>>n)
    {
        while (n--)
        {
            
            for (i=0;i<3;i++)
            {
                cin>>a[i];
                
            }
           
            ans1=ans1+a[0];
            ans2=ans2+a[1];
            ans3=ans3+a[2];
        }
       
        if(ans1==0&&ans2==0&&ans3==0)
        {cout<<"YES";}
        else
        {cout<<"NO";}
        
    }
 
    return 0;
}