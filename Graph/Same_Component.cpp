#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> vis;

vector<pair<int, int>> v = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m &&
           grid[x][y] == '.' && !vis[x][y];
}

bool dfs(int x, int y, int t1, int t2)
{
    if (x == t1 && y == t2)
        return true;

    vis[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int c1 = x + v[i].first;
        int c2 = y + v[i].second;

        if (valid(c1, c2))
        {
            if (dfs(c1, c2, t1, t2))
                return true;
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;

    grid.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int s1, s2, d1, d2;
    cin >> s1 >> s2;
    cin >> d1 >> d2;

    if (dfs(s1, s2, d1, d2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
