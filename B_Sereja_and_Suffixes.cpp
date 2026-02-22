#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n] = {0};
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        arr[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        cout << arr[a - 1] << endl;
    }

    return 0;
}