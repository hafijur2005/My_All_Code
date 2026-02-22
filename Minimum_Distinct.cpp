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
        int n;
        ll k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int x : a)
            freq[x]++;
        int first = a[0];
        vector<int> fre;
        for (auto &it : freq)
        {
            if (it.first != first)
            {
                fre.push_back(it.second);
            }
        }
        sort(all(fre));
        int r = 0;
        for (int f : fre)
        {
            if (k >= f)
            {
                k -= f;
                r++;
            }
            else
                break;
        }
        int ans = freq.size() - r;
        cout << ans ;
        nl
    }

    return 0;
}
