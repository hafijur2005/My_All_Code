#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    fast;
    int n;
    cin >> n;
    if (n % 2 == 0 && n > 2)
    {
        cout << "2";
    }
    else
    {
        if (prime(n))
            cout << "1";
        else if (prime(n - 2))
            cout << "2";
        else
            cout << "3";
    }
    nl return 0;
}