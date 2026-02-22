#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,target="hellow";
    cin >>s;
    int k=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==target[k])
        {
            k++;
        }  
        if(k==5)
        {
            cout<<"YES";
            return 0;
        } 
    }
    
    cout<<"NO";
    
 
    return 0;
}