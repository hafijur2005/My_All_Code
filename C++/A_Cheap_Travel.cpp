#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b, x, dif, ans;
    cin >> n >> m >> a >> b;
    x = a * m;

    if(x > b)
    {
        dif = n % m;
        if(dif * a < b)
            ans = (n / m) * b + dif * a;
        else
            ans = (n / m + 1) * b;
    }
    else
        ans = n * a;
    cout << ans << endl;
    return 0;
}