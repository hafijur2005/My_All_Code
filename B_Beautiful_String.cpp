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
        vector<char> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<pair<char, int>> v;

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (arr[i] != arr[j])
            {
                int k = i;
                while (1)
                {

                    if (k + 1 >= n)
                        break;

                    // cout << arr[k] << arr[k + 1] << endl;
                    if (arr[k] <= arr[k + 1])
                    {
                        v.push_back({arr[k], k});
                        k++;
                        if (k >= n)
                            break;
                    }
                    else
                    {

                        break;
                    }
                }
                i = k;
            }
        }

        cout << v.size() << endl;
        for (int i = 0; i < (int)v.size(); i++)
            cout << v[i].second + 1 << " ";
        cout << endl;
    }

    return 0;
}
