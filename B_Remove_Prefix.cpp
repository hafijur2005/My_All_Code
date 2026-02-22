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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        set<int> st;
        int j = n - 1;
        while (j >= 0)
        {
            if (st.count(arr[j]) > 0)
                break;
            st.insert(arr[j]);
            j--;
        }
        cout << j + 1 << endl;
    }

    return 0;
}
