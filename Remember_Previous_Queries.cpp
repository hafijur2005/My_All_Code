#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    list<int> list;

    while (t--)
    {
        int x;
        int v;
        cin >> x >> v;

        if (x == 0)
        {
            list.push_front(v);
        }
        else if (x == 1)
        {
            list.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < list.size())
            {
                auto it = list.begin();
                for (int i = 0; i < v; ++i)
                {
                    ++it;
                }
                list.erase(it);
            }
        }

        cout << "L -> ";
        for (auto val : list)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        if (!list.empty())
        {
            auto it = list.end();
            do
            {
                --it;
                cout << *it << " ";
            } while (it != list.begin());
        }
        cout << endl;
    }

    return 0;
}
