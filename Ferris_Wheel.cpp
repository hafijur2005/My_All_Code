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
    int n, x;
    cin >> n >> x;

    vector<int> child(n);
    for (int i = 0; i < n; i++)
        cin >> child[i];

    sort(all(child));

    int i = 0, j = n - 1;
    int count = 0;

    while (i <= j)
    {
        if (child[i] + child[j] <= x)
        {
            i++;
            j--;
        }
        else
            j--;
            
        count++;
    }

    cout << count;
    return 0;
}
