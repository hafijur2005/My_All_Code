#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        if(k % 2 == 0)
        {
            cout << "EVEN\n";
        }
        else
        {
            if(n % 2 == 0) cout << "EVEN\n";
            else cout << "ODD\n";
        }
    }
    return 0;
}
