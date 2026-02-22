#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            st.insert(a);
        }
        int i = 0, j = n - 1;
        bool flag3;
        while (i < j)
        {
            if (i + 1 >= j)
                break;
            flag3 = false;
            bool flag1 = true, flag2 = true;
            int ai = v[i];
            int aj = v[j];
            int max = *st.rbegin();
            int min = *st.begin();
            if (ai != max && ai != min && aj != max && aj != min)
            {
                flag3 = true;
                break;
            }
            else
            {
                if (ai == max || ai == min)
                {
                    st.erase(ai);
                    i++;
                }
                if (aj == max || aj == min)
                {
                    st.erase(aj);
                    j--;
                }
            }
        }

        if (flag3)
            cout << i + 1 << " " << j + 1 << endl;
        else
            cout << "-1\n";
    }

    return 0;
}