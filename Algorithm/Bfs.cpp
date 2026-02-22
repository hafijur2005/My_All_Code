#include <bits/stdc++.h>
using namespace std;
int lv[50];
vector<int> arr[10000];
bool vis[1000];
void dfs(int n) //bfs find shortest path of a node frome root or any nood.
{
    queue<int> q;
    q.push(n);
    vis[n] = true;
    while (!q.empty())
    {
        int valu = q.front();
        q.pop();
        for (auto it : arr[valu])
        {
            if (!vis[it])
            {
                q.push(it);
                lv[it] = lv[valu] + 1;
                vis[it] = true;
            }
        }
    }
}
int main()
{
    int n, e, root;
    cin >> n >> e >> root;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(lv, 0, sizeof(lv));
    memset(vis, false, sizeof(vis));
    dfs(root);
    for (int i = 0; i <= n; i++)
        cout << i << "->" << lv[i] << endl;
    return 0;
}