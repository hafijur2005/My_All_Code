#include <bits/stdc++.h>
using namespace std;

long long int cost[1001];
vector<pair<int, pair<int, int>>> v;
int n, e;
bool flag = false;

void bellma_ford(int source)
{
    cost[source] = 0;
    for (int l = 1; l <= n - 1; l++)
    {
        for (int i = 0; i < e; i++)
        {
            int a = v[i].first;
            int b = v[i].second.first;
            int c = v[i].second.second;
            if (cost[a] != LLONG_MAX && cost[a] + c < cost[b])
            {
                cost[b] = cost[a] + c;
            }
        }
    }
    for (int j = 0; j < e; j++)
    {
        int a = v[j].first;
        int b = v[j].second.first;
        int c = v[j].second.second;
        if (cost[a] != LLONG_MAX && cost[a] + c < cost[b])
        {
            flag = true;
            cout << "Negative Cycle Detected" << endl;
            break;
        }
    }
}

int main()
{
    cin >> n >> e;
    for (int j = 0; j < e; j++)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, {b, c}});
    }
    for (int k = 1; k <= n; k++)
    {
        cost[k] = LLONG_MAX;
    }
    long long int s, t;
    cin >> s >> t;
    bellma_ford(s);

    if (!flag)
    {
        while (t--)
        {
            int d;
            cin >> d;
            if (cost[d] == LLONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << cost[d] << endl;
        }
    }
    return 0;
}
