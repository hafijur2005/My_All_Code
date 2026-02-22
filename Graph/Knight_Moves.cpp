#include <bits/stdc++.h>
using namespace std;

int m, n, k1, k2, q1, q2;
vector<pair<int, int>> pos = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
bool vis[105][105];
int dist[105][105];

bool valid(int s1, int s2)
{
    return s1 >= 0 && s1 < m && s2 >= 0 && s2 < n;
}

int bfs(int s1, int s2)
{
    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));

    queue<pair<int, int>> q;
    q.push({s1, s2});
    vis[s1][s2] = true;
    dist[s1][s2] = 0;

    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        if (cx == q1 && cy == q2)
            return dist[cx][cy];

        for (auto mv : pos)
        {
            int nx = cx + mv.first;
            int ny = cy + mv.second;

            if (valid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                dist[nx][ny] = dist[cx][cy] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> k1 >> k2 >> q1 >> q2;
        int ans = bfs(k1, k2);
        cout << ans << endl;
    }
    return 0;
}
