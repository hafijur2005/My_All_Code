#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
static const ll mod = 1000000007;

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }
        ll ans = 1;
        for (int i = 0; i < 26; i++)
        {
            ans = (ans * (freq[i] + 1)) % mod;
        }
        ans = (ans - 1 + mod) % mod;
        cout << ans;
        nl
    }

    return 0;
}
