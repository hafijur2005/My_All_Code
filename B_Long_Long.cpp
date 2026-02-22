#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        vector<int> arr;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a != 0)
            {
                arr.push_back(a);
                sum += abs(a);
            }
        }
        ll ind, count = 0;
        bool flag = false, prev = false;
        for (ll i = 0; i < arr.size(); i++)
        {
            if (arr[i] < 0 && !flag)
            {
                prev = true;
                flag = true;
                ind = i;
            }
            else if (flag)
            {
                if (ind == i - 1 && arr[i] < 0 && prev)
                {
                    ind = i;
                }
                else
                {
                    count++;
                    prev = false;
                    flag = false;
                }
            }
        }
        if (!arr.empty() && arr.back() < 0)
            count++;

        cout << sum << " " << count;
        nl
    }

    return 0;
}