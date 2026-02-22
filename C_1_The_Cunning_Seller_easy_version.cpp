#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<long long, long long>> vec;
    for (int i = 0; i <= 18; i++)
    {
        long long a = round<long long>(pow(3, i));
        long long b1 = a * 3;
        long long b2 = 0;
        if (i > 0)
        {
            b2 = i * a / 3;
        }
        long long b = b1 + b2;

        vec.push_back(make_pair(a, b));
    }

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long cost = 0;
        long long x = 0;

        for (int i = (int)vec.size() - 1; i >= 0 && n > 0; i--)
        {
            long long a = vec[i].first;
            long long cost1 = vec[i].second;

            long long b = n / a;
            if (b > 0)
            {
                cost += b * cost1;
                x += b;
                n %= a;
            }
        }
        cout << cost << endl;
    }

    return 0;
}
