#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, first = -1, last = -1, count = 0, temp = 0;
        cin >> n;
        string arr;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '1')
            {
                flag = true;
            }
            if (flag == true)
            {
                if (arr[i] == '0')
                {
                    temp++;
                }
                if (arr[i] == '1')
                {
                    count += temp;
                    temp = 0;
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}