#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1000][1000];
bool vis[1000][1000];

vector<pair<int ,int>> v={{0,-1},{0,1},{-1,0},{1,0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == '.' &&!vis[x][y]);
}

int dfs(int x, int y)
{
    vis[x][y] = true;
    int count = 1;
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = x + v[dir].first;
        int ny = y + v[dir].second;
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> a_size;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.' && !vis[i][j])
            {
                int size = dfs(i, j);
                a_size.push_back(size);
            }
        }
    }

    if (a_size.empty())
    {
        cout << "." << endl; 
    }
    else
    {
        sort(a_size.begin(), a_size.end());
        for (int size : a_size)
        {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}
