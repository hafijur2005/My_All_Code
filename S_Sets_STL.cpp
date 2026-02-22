#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            st.insert(b);

        else if (a == 2)
            st.erase(b);

        else
        {
            if (st.find(b) != st.end())
                cout << "Yes\n";

            else
                cout << "No\n";
        }
    }

    return 0;
}