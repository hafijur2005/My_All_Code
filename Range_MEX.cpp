#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int qi = 0; qi < q; qi++)
    {
        int a, b;
        cin >> a >> b;

        vector<int> st;
        for (int i = a - 1; i < b; i++)
        {
            st.push_back(arr[i]);
        }

        sort(st.begin(), st.end());

        int i = 0;
        while (i < st.size())
        {
            if (st[i] == st[i - 1])
            {
                st.erase(st.begin() + i);
            }
            else
            {
                i++;
            }
        }
        int x = 0;
        for (int i = 0; i < (int)st.size(); i++)
        {
            if (st[i] == x)
            {
                x++;
            }
        }
        cout << x << "\n";
    }

    return 0;
}
