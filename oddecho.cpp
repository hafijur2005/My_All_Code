#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        if (i % 2 == 1)
            cout << s << "\n";
    }

    return 0;
}