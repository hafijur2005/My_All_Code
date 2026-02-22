#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, b;
    cin >> n;
    for (i = n; 1; i++)
    {
        long long a = i;
        b = n;
        long long rem = b % a;
        b = a;
        a = rem;
        if (a == 0 && b % n == 0)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}