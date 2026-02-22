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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll l = 0, sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp.size() <= k)
        {
            sum += i - l + 1;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[arr[l]]--;
                if (!mp[arr[l]])
                    mp.erase(arr[l]);
                l++;
            }
            sum += i - l + 1;
        }
    }
    cout << sum;
    nl return 0;
}