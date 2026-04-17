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

    int n, k;
    cin >> n >> k;
    int arr[n];
    int sum = 0, count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0 && count < k)
            v.push_back(abs(arr[i]));
    }
    sort(all(v),greater<int>());
    int x = min(k, (int)v.size());
    for (int i = 0; i < x; i++)
        sum += v[i];
    cout << sum;

    return 0;
}
