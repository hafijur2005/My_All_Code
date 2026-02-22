#include <bits/stdc++.h>
using namespace std;

bool sort2(pair<long long, int> a, pair<long long, int> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        v[i] = {val, i};
    }
    sort(v.begin(), v.end(), sort2);
    
    int i = 0;
    while (i < n)
    {
        long long val = v[i].first, i1 = v[i].second, i2 = v[i].second;

        int j = i + 1;
        while (j < n && v[j].first == val)
        {
            if (v[j].second < i1)
            {
                i1 = v[j].second;
            }
            if (v[j].second > i2)
            {
                i2 = v[j].second;
            }
            j++;
        }
        cout << val << " " << i1 + 1 << " " << i2 + 1 << "\n";
        i = j;
    }

    return 0;
}
