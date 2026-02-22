#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int j = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n)
        {
            if (arr[j] >= i+1)
            {
                count++;
                arr[j]=0;
                break;
            }
            j++;
        }
        if (j >= n) break;
    }

    cout << count;
    return 0;
}
