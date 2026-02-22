#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    priority_queue<int> arr[n];
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            int c;
            cin >> c;
            arr[b].push(c);
        }
        else if (a == 1)
        {
            if (!arr[b].empty())
            {
                cout << arr[b].top() << endl;
            }
        }
        else
        {
            if (!arr[b].empty())
            {
                arr[b].pop();
            }
        }
    }

    return 0;
}