#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> maze;
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && (maze[x][y] == '.' || maze[x][y] == 'D'));
}

bool bfs(pair<int, int> start, pair<int, int> dest, map<pair<int, int>, pair<int, int>> &parent)
{
    queue<pair<int, int>> q;
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    q.push(start);
    vis[start.first][start.second] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == dest.first && y == dest.second)
        {
            return true;
        }

        for (int k = 0; k < 4; k++)
        {
            int nx = x + v[k].first;
            int ny = y + v[k].second;
            if (valid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                parent[{nx, ny}] = {x, y};
                q.push({nx, ny});
            }
        }
    }
    return false;
}

void mark(pair<int, int> start, pair<int, int> dest, map<pair<int, int>, pair<int, int>> &parent)
{
    pair<int, int> cur = dest;
    while (cur != start)
    {
        if (maze[cur.first][cur.second] == '.')
        {
            maze[cur.first][cur.second] = 'X';
        }
        cur = parent[cur];
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        cout << maze[i] << "\n";
    }
}

int main()
{
    cin >> n >> m;
    maze.resize(n);

    pair<int, int> start, dest;

    for (int i = 0; i < n; i++)
    {
        cin >> maze[i];
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 'R')
                start = {i, j};
            if (maze[i][j] == 'D')
                dest = {i, j};
        }
    }

    map<pair<int, int>, pair<int, int>> parent;

    if (bfs(start, dest, parent))
    {
        mark(start, dest, parent);
        print();
    }
    else
    {
        print();
    }

    return 0;
}
