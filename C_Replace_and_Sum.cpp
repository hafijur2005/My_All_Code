#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr1[n], arr2[n], pre_sum[n];

        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        pre_sum[0] = arr1[0];
        for (int i = 1; i < n; i++)
            pre_sum[i] = pre_sum[i - 1] + arr1[i];

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            int sum;
            if (l == 0)
                sum = pre_sum[r];
            else
                sum = pre_sum[r] - pre_sum[l - 1];
            
            for (int i = r; i >= l; i--)
            {
                cout<<"x
                "<<arr1[2]<<" "<<arr2[2];
                nl
                if (arr1[i + 1] > arr1[i] && arr1[i + 1] > arr2[i] && i+1 < n)
                {
                    // cout<<sum<<" "<<arr1[i+1]<<" "<<arr1[i];
                    // nl
                    sum += arr1[i + 1] - arr1[i];
                    arr1[i] = arr1[i + 1];
                   
                }
                else if (arr2[i] > arr1[i])
                {
                    sum += arr2[i] - arr1[i];
                    // cout<<sum<<" "<<arr1[i]<<" "<<arr2[i];
                    // nl
                    arr1[i] = arr2[i];
                }
            }

            cout << sum << " ";
            nl
        }
        nl
    }
    return 0;
}
