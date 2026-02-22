#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int arr2[201] = {0};
    bool arr3[201] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[arr[i] + 100]++;
    }

    for (int i = 0; i < n; i++)
    {
        int idx = arr[i] + 100;
        if (!arr3[idx])
        {
            cout << arr[i] << " occurs " << arr2[idx] << " times" << endl;
            arr3[idx] = true;
        }
    }

    return 0;
}
