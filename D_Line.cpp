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
        char s[n];
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == 'L')
            {
                pq.push(i - 0);
                sum += i;
            }
            else
            {
                pq.push(n - i - 1);
                sum += n - i - 1;
            }
        }
        for (long long i = 0; i < n; i++)
        {
            long long x = pq.top();
            pq.pop();
            if (x < n / 2)
            {

                sum = sum - x + n - x - 1;
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}