#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(const vector<int> &vec)
{
    int n, ind1, ind2, mxh;
    n = vec.size();
    mxh = 0;
    ind1 = 0;
    ind2 = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int mih = min(vec[i], vec[j]);
            if (mih > mxh)
            {
                mxh = mih;
                ind1 = i;
                ind2 = j;
            }
        }
    }

    return {ind1, ind2};
}
int main()
{
    
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; ++i)
            cin >> vec[i];

        pair<int, int> res = solve(vec);
        cout << res.first << " " << res.second << endl;
    }

    return 0;
}
