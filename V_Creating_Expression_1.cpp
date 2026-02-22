#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
int arr[25];
int n, x;

bool check(int sum, int i)
{
    if (i == n)
        return sum == x;
    return check(sum + arr[i], i + 1) || check(sum - arr[i], i + 1);
}

int main()
{
    fast;
    memset(arr, 0, sizeof(arr));
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //bool flag = check(0, 0);
    if (check(0, 0))
        yes 
    else 
        no 
    return 0;
}
