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
        cin >> n;
        multiset<int> ms;
        ll point = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (ms.size() == 0 || a != 0)
                ms.insert(a);
            if (!ms.empty() && a == 0)
            {
                point += *ms.rbegin();
                ms.erase(ms.find(*ms.rbegin()));
            }
        }
        cout << point;
        nl
    }

    return 0;
}