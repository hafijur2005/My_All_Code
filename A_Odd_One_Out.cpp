#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false),cin.tie(nullptr)
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<"\n";

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=b&&a!=c)
            cout<<a;
        else if(b!=c&&b!=a)
            cout<<b;
        else
            cout<<c;
        nl
    }
    
    return 0;
}