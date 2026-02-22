#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    while (q--)
    {
        int b;
        cin >> b;
        if (b == 0)
        {
            int c;
            cin >> c;
            dq.push_back(c);
        }
        else if (b == 1)
        {
            sort(dq.begin(), dq.end());
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else
        {
            sort(dq.begin(), dq.end());
            cout << dq.back() << endl;
            dq.pop_back();
        }
    }

    return 0;
}