#include <bits/stdc++.h>
using namespace std;
long long val[1001], weight[1001];
long long dp[1001][1001];
long long knapsak(long long i, long long w)
{
    if (i < 0 || w <= 0)
        return 0;

    if (dp[i][w] != -1)
    {
        return dp[i][w];
    }

    if (weight[i] <= w)
    {
        long long op1 = knapsak(i - 1, w - weight[i]) + val[i];
        long long op2 = knapsak(i - 1, w);
        dp[i][w] = max(op1, op2);
        return dp[i][w];
    }
    else
    {
        dp[i][w] = knapsak(i - 1, w);
        return dp[i][w];
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, w;
        cin >> n >> w;
        for (long long i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        for (long long i = 0; i <= n; i++)
        {
            for (long long j = 0; j <= w; j++)
                dp[i][j] = -1;
        }

        cout << knapsak(n - 1, w) << endl;
    }

    return 0;
}