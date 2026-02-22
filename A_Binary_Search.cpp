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
    map<int, bool> flag;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        flag[arr[i]] = true;
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (flag.count(x) == 1)
            yes 
        else 
            no
    }

    return 0;
}