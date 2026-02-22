#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    while (n)
    {
        int rem = n % 10;
        if (rem == 7)
        {
            cout << "Lucky";
            return 0;
        }
        n /= 10;
    }
    cout << "Not Lucky";
    return 0;
}