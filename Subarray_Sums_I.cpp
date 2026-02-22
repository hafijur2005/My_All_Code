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
    int n, x, count = 0;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == x)
            count++;
        else
            arr.push_back(a);
    }

    int sum = 0, l = 0;
    n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        while (sum > x && l <= i)
        {
            sum -= arr[l];
            l++;
        }

        if (sum == x)
            count++;
    }

    cout << count;
    return 0;
}
