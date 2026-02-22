#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, sum, temp;
        cin >> n >> k;
        temp = k;
        sum = k;
        while (temp >= n)
        {
            sum += temp / n;
            temp = temp / n + temp % n;
        }

        cout << sum << endl;
    }
    return 0;
}