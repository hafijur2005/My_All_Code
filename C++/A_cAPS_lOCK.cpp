#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int x=s[i];
        if(x>=65&&x<=91)
        {
        x=x+32;
        s[i]=x;
        }
    }
    int x=s[0];
    x=x-32;
    s[0]=x;
    cout<<s;
 
 
    return 0;
}