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
        int n;
        cin>>n;
        bool flag=true;
        while(n--)
        {
            int x;
            cin>>x;
            if(x<5)
                flag=false;
        }
        if(flag)
        yes
        else
        no
    }
    
    return 0;
}