#include <bits/stdc++.h>
using namespace std;
vector<int> arr[1000];
bool vis[1000];
void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;

    for (int child: arr[src])
    {
        if (vis[child]==false)
        {
            dfs(child);
        }
    }
}
int main()
{

    int n, e, a, b;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(0);
    memset(vis, false, sizeof(a));
    return 0;
}