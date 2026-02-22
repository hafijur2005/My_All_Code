#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,oddcount=2;
    cin>>n>>m;
    while(n--)
    {
        if(n%2==0)
        {
            for(int i=1;i<=m;i++)
            {
                cout<<'#';
            }
            cout<<endl;
        }
        else if(n%2!=0&&oddcount%2==0)
        {
            for(int i=1;i<m;i++)
            {
                cout<<'.';
            }
            oddcount++;
            cout<<'#';
            cout<<endl;
        }
        else{
            cout<<'#';
            for(int i=2;i<=m;i++)
            {
                cout<<'.';
            }
            oddcount++;
            cout<<endl;
        }
        
    }
 
 
    return 0;
}