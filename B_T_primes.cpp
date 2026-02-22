#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        if (num <= 3)
        {
            cout << "NO" << endl;
            continue;
        }

        long long root = sqrt(num);
        if (root * root == num && prime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
