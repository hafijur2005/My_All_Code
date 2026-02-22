#include <bits/stdc++.h>
using namespace std;
long long arr[101][101];
int n, e;

void floyed_warshall()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (arr[j][i] != LLONG_MAX && arr[i][k] != LLONG_MAX && arr[j][k] > arr[j][i] + arr[i][k])
                {
                    arr[j][k] = arr[j][i] + arr[i][k];
                }
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == j)
                arr[i][j] = 0;
            else
                arr[i][j] = LLONG_MAX;
        }
    }

    for (int i = 0; i < e; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (arr[a][b] > c)
            arr[a][b] = c;
    }
    floyed_warshall();
    int q, x, y;
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        if (arr[x][y] == LLONG_MAX)
            cout << "-1" << endl;
        else
            cout << arr[x][y] << endl;
    }

    return 0;
}