#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        string s;
        
            cin >> s;
        
        x = sqrt(n);
        cout << x << " " << n;
        if (x * x == n)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}