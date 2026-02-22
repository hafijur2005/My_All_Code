#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<string> v;
vector<vector<bool>> vis;

vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && v[x][y] == '.' && !vis[x][y]);
}

int dfs(int x, int y)
{
    vis[x][y] = true;
    int count = 1;
    for (const auto &dir : directions)
    {
        int nx = x + dir.first;
        int ny = y + dir.second;
        if (valid(nx, ny))
        {
            count += dfs(nx, ny);
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;
    v.resize(n);
    vis.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int a_count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (v[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                a_count++;
            }
        }
    }

    cout << a_count << "\n";

    return 0;
}
