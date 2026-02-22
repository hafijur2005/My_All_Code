#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==0&&b==0)
        {
            cout<<"ORIGIN"<<endl;
        }
        else if(b==0)
        {
            cout<<"X-AXIS"<<endl;
        }
        else if(a==0)
        {
            cout<<"Y-AXIS"<<endl;
        }
        else if(a>0&&b>0)
        {
            cout<<"1ST QUADRANT"<<endl;
        }
        else if(a<0&&b>0)
        {
            cout<<"2ND QUADRANT"<<endl;
        }
        else if(a<0&&b<0)
        {
            cout<<"3RD QUADRANT"<<endl;
        }
        else
        {
            cout<<"4TH QUADRANT"<<endl;
        }
    }
    return 0;
}