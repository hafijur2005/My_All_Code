#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr[1000]; 
int dis[1000];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int par_dis = it.first;
        int parent = it.second;
        for (auto child : arr[parent])
        {
            int child_node = child.first;   
            int weight = child.second;      

            if (par_dis + weight < dis[child_node])
            {
                dis[child_node] = par_dis + weight;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i <= n; i++)
        dis[i] = INT_MAX;

    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        arr[a].push_back({b, w});
        arr[b].push_back({a, w});
    }

    
    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            cout << "1 -> " << i << " = INF\n";
        else
            cout << "1 -> " << i << " = " << dis[i] << "\n";
    }

    return 0;
}
