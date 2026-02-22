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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = n - 1;
    long long left_sum = 0, right_sum = 0;
    long long ans = 0;

    while (i <= j)
    {
        if (left_sum < right_sum)
        {
            left_sum += arr[i++];
        }
        else if (left_sum > right_sum)
        {
            right_sum += arr[j--];
        }
        else
        {

            ans = left_sum;
            if (i == j)
                break;
            left_sum += arr[i++];
            right_sum += arr[j--];
        }
    }

    if (left_sum == right_sum)
        ans = left_sum;

    cout << ans;
    nl return 0;
}
