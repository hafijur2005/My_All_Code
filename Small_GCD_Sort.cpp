#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        vector<pair<int, int>> v;
        for (int j = 1; j <= i; j++)
        {

            v.push_back({gcd(i, j), j});
        }
        sort(v.begin(), v.end(), cmp);

        for (int k = 0; k < v.size(); k++)
        {
            cout << v[k].second << " ";
        }

        cout << "\n";
    }

    return 0;
}
