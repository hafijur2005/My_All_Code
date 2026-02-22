#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    int n, a;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        auto it = find(li.begin(), li.end(), n);
        if (it == li.end())
        {
            li.push_back(n);
        }
    }
    li.sort();
    for (int val : li)
    {
        cout << val << " ";
    }

    return 0;
}