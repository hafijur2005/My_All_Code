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
    int n, m;
    cin >> n >> m;
    int arr[n + 2] = {0};
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b + 1]--;
    }
    int min = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
        if (min > arr[i])
            min = arr[i];
    }
    sort(arr, arr + n + 1);
    cout << arr[1];
    return 0;
}