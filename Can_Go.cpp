#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
char arr[1000][1000];
vector<pair<int, int>> directions = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m, t1, t2;

bool valid(int i, int j)
{
    return (i >= 0 && i < m && j >= 0 && j < n && arr[i][j] != '#');
}

bool dfs(int i, int j)
{
    if (i == t1 && j == t2)
        return true;

    vis[i][j] = true;

    for (int d = 0; d < 4; d++)
    {
        int ni = i + directions[d].first;
        int nj = j + directions[d].second;

        if (valid(ni, nj) && !vis[ni][nj])
        {
            if (dfs(ni, nj))
                return true;
        }
    }

    return false;
}

int main()
{
    int s1, s2;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
            {
                s1 = i;
                s2 = j;
            }
            if (arr[i][j] == 'B')
            {
                t1 = i;
                t2 = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if (dfs(s1, s2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
