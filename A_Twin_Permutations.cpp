#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], arr1[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            arr1[i] = n + 1 - arr[i];

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";
        cout<<"\n";
    }

    return 0;
}