#include <bits/stdc++.h>
using namespace std;
vector<int> arr[1001];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        sort(arr[i].begin(), arr[i].end(), greater<int>());
    }
    int x;
    cin >> x;
    while (x--)
    {
        int c;
        cin >> c;
        if (arr[c].empty())
            cout << -1;
        else
        {
            for (int i : arr[c])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}