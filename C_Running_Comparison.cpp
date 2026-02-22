#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        for (int i = 0; i < n; i++)
            if (arr1[i] * 2 >= arr2[i] && arr2[i] * 2 >= arr1[i])
            {
                count++;
            }
        cout << count << endl;
    }

    return 0;
}