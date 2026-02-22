#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, count1 = 0;
        bool flag = false;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count1++;
            else if (arr[i] != 0)
                count++;
        }
        count += ceil(count1 * 1.0 / 2);
        cout << count << "\n";
    }

    return 0;
}