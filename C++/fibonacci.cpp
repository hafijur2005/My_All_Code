#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first=0,second=1,next,n;
    cin>>n;
    cout<<first<<" "<<second;
    
    for(int i=2;i<n;i++)
    {
        next=first+second;
        cout<<" "<<next;
        first=second;
        second=next;
    }
    return 0;
}