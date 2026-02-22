#include <bits/stdc++.h>
using namespace std;

int par[100005];
int size_set[100005];

void make_set(int v)
{
    par[v] = v;
    size_set[v] = 1;
}

int find(int v)
{
    if (v == par[v])
        return v;
    return par[v] = find(par[v]);
}

bool union_set(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return false;
    if (size_set[a] < size_set[b])
        swap(a, b);
    par[b] = a;
    size_set[a] += size_set[b];
    return true;
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }

    int cycle = 0;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        if (!union_set(u, v))
        {
            cycle++;
        }
    }

    cout << cycle << "\n";

    return 0;
}
