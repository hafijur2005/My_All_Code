#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a>0&&(a%3==0||a%7==0))
        {
            if(a%3==0&&a%7==0)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}