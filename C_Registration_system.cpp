#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>m;
    while(n--)
    {
        cin>>s;
        if(m.count(s)==0)
        {
            cout<<"OK"<<endl;
            m[s]=1;
        }
        else
        {
            cout<<s<<m[s]<<endl;
            m[s]+=1;
        }
    }
 
    return 0;
}