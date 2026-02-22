#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin>>t)
    {
        while (t--)
        {
            int n,result;
            cin>>n;
            if(n>2&&n%2!=0)
            {
                result=n/2;
                cout<< result<<endl;
            }
            else if(n>2&&n%2==0)
            {
                result=(n/2-1);
                cout<< result<<endl;
            }
            else
            {
                cout<< 0<<endl;
            }

        }
        
    }
    
 
    return 0;
}