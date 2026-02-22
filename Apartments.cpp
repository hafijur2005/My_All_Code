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
    fast;
    int n, m, k, count = 0;
    cin >> n >> m >> k;

    vector<int> apartment(n);
    vector<int> application(m);

    for (int i = 0; i < n; i++)
        cin >> apartment[i];
    for (int i = 0; i < m; i++)
        cin >> application[i];

    sort(all(apartment));
    sort(all(application));

    int j = 0;

    for (int i = 0; i < m; i++)
    {
        while (j < n && apartment[j] < application[i] - k)
            j++;

        if (j < n && apartment[j] <= application[i] + k)
        {
            count++;
            j++;
        }
    }

    cout << count;
    return 0;
}
