#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            arr.push_back(z);
        }
        sort(arr.begin(), arr.end());
        arr.push_back(INT_MAX);
        int count = 1, sum = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
                sum++;
            }
            else
            {

                v.push_back(count);
                count = 1;
            }
        }
        sum += v.size();
        int mf = *max_element(v.begin(), v.end());
        if (2 * mf - sum > 0)
            cout << 2 * mf - sum << endl;
        else
        {
            if (n % 2 == 1)
                cout << "1\n";

            else
                cout << "0\n";
        }
    }

    return 0;
}