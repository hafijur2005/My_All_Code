#include <bits/stdc++.h>
using namespace std;
vector<int>arr[1000];
bool vis[1000];
bool dfs(int n,int target) //it travers all the elements by depth 
{
    // cout<<n<<" "<<target<<endl;
    if(n==target)
    {
        return true;
    }
    vis[n]=true;
    for(int it:arr[n])
    {
        if(!vis[it])
        {
            return dfs(it,target);
            vis[it]=true;
        }
    }
    return false;
}
int main()
{
    int n,e,root,value;
    cin>>n>>e>>root>>value;
    for(int i=0;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    if(dfs(root,value))
        cout<<"found";
    else
        cout<<"Not Found";
    return 0;
}