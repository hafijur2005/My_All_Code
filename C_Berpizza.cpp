#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    bool arr[500001] = {false};
    queue<int> q;
    set<pair<int, int>, cmp> mp;
    int p = 0;

    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int b;
            cin >> b;
            q.push(p);
            mp.insert({b, p});
            p++;
        }
        else if (a == 2)
        {
            while (!q.empty())
            {
                if (!arr[q.front()])
                {
                    cout << q.front() + 1 << " ";
                    arr[q.front()] = true;
                    q.pop();
                    break;
                }
                else
                    q.pop();
            }
        }
        else
        {
            while (!mp.empty())
            {
                auto it = prev(mp.end());
                int z = it->second;
                if (!arr[z])
                {
                    cout << z + 1 << " ";
                    arr[z] = true;
                    mp.erase(it);
                    break;
                }
                else
                    mp.erase(it);
            }
        }
    }
    return 0;
}
