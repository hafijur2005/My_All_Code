#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b = 0, i = 0, count = 0;
    cin >> n;

    while (n)
    {
        if (n % 2 != 0)
        {
            count++;
            n--;
        }
        n /= 2;
    }

    cout << count;
    return 0;
}