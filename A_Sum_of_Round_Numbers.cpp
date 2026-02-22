#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans, count = 0;
        cin >> n;
        vector<int> vec;
        while (n)
        {
            int rem = n % 10;
            if (rem != 0)
            {
                count++;
            }
            vec.push_back(rem);
            n /= 10;
        }
        cout << count << endl;
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            ans = 0;
            if (vec[i] != 0 && i != 0)
            {
                ans = vec[i] * round(pow(10, i));
                cout << ans << " ";
            }
            if (vec[i] != 0 && i == 0)
            {
                ans = vec[i];
                cout << ans << " ";
            }
        }
        cout << endl;
    }

    return 0;
}