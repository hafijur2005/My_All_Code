#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    v.push_back(0);

    for (int i = 0; i < n; i++)
    {
        int ind = v.size();
        for (int j = 0; j < ind; j++)
        {
            v.push_back(v[j] + arr[i]);
        }
    }

    sort(v.begin(), v.end());
    int i = 1;
    while (i < v.size())
    {
        if (v[i] == v[i - 1])
        {
            v.erase(v.begin() + i);
        }
        else
        {
            i++;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        int h1 = INT_MAX, h2 = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= l)
            {
                h1 = i;
                break;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > r)
            {
                h2 = i;
                break;
            }
        }
        cout << h2 - h1 << "\n";
    }

    return 0;
}
