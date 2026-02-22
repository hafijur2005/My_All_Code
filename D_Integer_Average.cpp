#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n > 2)
            cout << "YES\n";
        else if ((arr[0] % 2 == 0 && arr[1] % 2 == 0) || arr[0] % 2 == 1 && arr[1] % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}