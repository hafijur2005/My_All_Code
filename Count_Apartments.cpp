#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1000][1000];
bool vis[1000][1000];
vector<pair<int ,int>> v={{0,-1},{0,1},{-1,0},{1,0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m &&arr[x][y] == '.' &&!vis[x][y]);
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = x + v[dir].first;
        int ny = y + v[dir].second;
        if (valid(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int apartment = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                apartment++;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    cout << apartment;
    return 0;
}
