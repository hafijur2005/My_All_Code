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
    }
    int x;
    cin >> x;
    while (x--)
    {
        int c, d;
        bool flag = false;
        cin >> c >> d;
        for (int i : arr[c])
        {
            if (i == d)
            {
                flag = true;
            }
        }
        if (flag || c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}