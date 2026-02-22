#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    bool arr[x];
    int count = 0;
    memset(arr, false, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == x)
            count++;
        if (a < x)
            arr[a] = true;
    }

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 0)
            count++;
    }
    cout << count;
    return 0;
}