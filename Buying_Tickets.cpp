#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        string s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                v.push_back(arr[i]);
        }
        int sum = 0;
        if (v.size() >= k)
        {
            sort(all(v));
            for (int i = 0; i < k; i++)
                sum += v[i];
        }
        else
        {
            cout << "-1";
            nl 
            continue;
            ;
        }
        cout << sum;
        nl
    }
    return 0;
}
