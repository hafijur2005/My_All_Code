#include <bits/stdc++.h>
using namespace std;

int dis[1000][1000];

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
        {
            dis[i][j] = INT_MAX;
            dis[i][i]=0;
        }   
    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
        dis[b][a] = w;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if (dis[j][i] != INT_MAX && dis[i][k] != INT_MAX && dis[j][k] > dis[j][i] + dis[i][k])
                {
                    dis[j][k] = dis[j][i] + dis[i][k];
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << i << "->" << j << "=" << dis[i][j] << endl;
    cout<<dis[3][4];
    return 0;
}