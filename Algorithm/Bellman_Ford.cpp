#include <bits/stdc++.h>
using namespace std;
int cost[1001];
vector<pair<int, pair<int, int>>> v;
int n, e;
void bellma_ford(int x)
{
    for (int i = 1; i <= x; i++)
    {
        int a, b, c;
        a = v[i].first;
        b = v[i].second.first;
        c = v[i].second.second;
        if (cost[a] != INT_MAX && cost[a] + c < cost[b])
        {
            cost[b] = cost[a] + c;
        }
    }
}
int main()
{

    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, {b, c}});
    }
    for (int i = 1; i <= n; i++)
    {
        cost[i] = INT_MAX;
    }
    cost[1] = 0;
    bellma_ford(e);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> " << cost[i] << endl;
    }
    return 0;
}