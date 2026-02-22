#include <bits/stdc++.h>
using namespace std;
int arr[101][101];
bool valid[101][101];
int n,m,count;
vector<pair<int ,int>>v={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i,int j,int &count)
{
    if(i>=0&&i<n&&j>=0&&j<m)
    return true;
    else
    {
        count++;
        return false;
    }
}
void dfs(int a,int b)
{
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {

            }
        }
    }
     
    return 0;
}