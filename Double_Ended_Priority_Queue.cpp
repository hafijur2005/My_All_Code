#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    while (q--)
    {
        int b;
        cin >> b;
        if (b == 0)
        {
            int c;
            cin >> c;
            ms.insert(c);
        }
        else if (b == 1)
        {
            cout << *ms.begin() << endl;
            ms.erase(ms.begin());
        }
        else
        {
            cout << *ms.rbegin() << endl;
            ms.erase(prev(ms.end()));
        }
    }
    return 0;
}
