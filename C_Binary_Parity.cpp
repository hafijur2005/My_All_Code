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
        int n,sum=0;
        cin>>n;
        while(n)
        {
            int rem=n%2;
            sum+=rem;
            n/=2;
        }
        if(sum%2==0)
            cout<<"EVEN";
        else
            cout<<"ODD";
        nl
    }
    
    return 0;
}