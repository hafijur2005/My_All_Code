#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> arr[n];
    for(int i=0;i<e;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a].push_back({b,c});
    }
    for(int i=0;i<n;i++)
    {
        for(auto y:arr[i])
        {
            cout<<i<<" "<<y.first<<" "<<y.second;
        }
    }
 
    return 0;
}