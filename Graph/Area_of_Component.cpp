#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> vis;
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] == '.' && !vis[x][y];
}

int dfs(int x, int y)
{
    vis[x][y] = true;
    int size = 1;

    for (int i = 0; i < 4; i++)
    {
        int c1 = x + v[i].first;
        int c2 = y + v[i].second;

        if (isValid(c1, c2))
        {
            size += dfs(c1, c2);
        }
    }

    return size;
}

int main()
{
    cin >> n >> m;
    grid.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int minimum = INT_MAX;
    bool flagnt = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int area = dfs(i, j);
                minimum = min(minimum, area);
                flagnt = true;
            }
        }
    }

    if (!flagnt)
        cout << -1 << endl;
    else
        cout << minimum << endl;

    return 0;
}
