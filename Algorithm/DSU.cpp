#include <bits/stdc++.h>
using namespace std;
int parents[100];
int size_x[100];
int find(int x)
{
    if (parents[x] == -1)
    {
        return x;
    }
    int leader = find(parents[x]);
    parents[x] = leader;
    cout << x << " " << leader << endl;
    return leader;
}
void add(int a, int b)
{
    int leader1 = find(a);
    int leader2 = find(b);
    if (size_x[leader1] >= size_x[leader2])
    {
        parents[leader2] = leader1;
        size_x[leader1] += size_x[leader2];
    }
    else
    {
        parents[leader1] = leader2;
        size_x[leader2] += size_x[leader1];
    }
}
int main()
{
    memset(parents, -1, sizeof(parents));
    memset(size_x, 1, sizeof(size_x));
    for (int i = 0; i < 5; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        add(x1, x2);
    }
    int x = find(7);
    cout << x;
    return 0;
}