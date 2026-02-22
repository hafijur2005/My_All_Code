#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        int val = power(x, n / 2);
        return val * val;
    }
    else
    {
        return x * power(x, n - 1);
    }
}

int main()
{
    int x, n;
    cin>>x>>n;
    cout<<power(x, n)<<" "<<endl;
    return 0;
}