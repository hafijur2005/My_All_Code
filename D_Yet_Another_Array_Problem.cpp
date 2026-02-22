#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define nl cout << "\n";

vector<int> prime, low;

int main()
{
    fast;

    for (int i = 2; i < 200000; i++)
    {
        bool flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            prime.push_back(i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        low.clear();

        int n;
        cin >> n;
        vector<long long> arr(n);
        bool flag_odd= false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
                flag_odd= true;
        }

        if (flag_odd)
        {
            cout << 2;
            nl;
            continue;
        }

        for (int i = 0; i < prime.size(); i++)
        {
            bool ok = false;
            for (int j = 0; j < n; j++)
            {
                if (__gcd(arr[j], 1LL * prime[i]) == 1)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                cout << prime[i];
                nl;
                break;
            }
        }
    }
}
