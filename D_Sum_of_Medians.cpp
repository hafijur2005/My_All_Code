#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n * k];

        for (int i = 0; i < (n * k); i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        sort(arr, arr + n * k);
        for (int i = n * k - 1; i > n * k - 5; i--)
        {
            sum = sum + arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}