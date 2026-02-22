#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        string str;
        getline(cin, str);

        transform(str.begin(), str.end(), str.begin(), ::toupper);

        if (str == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
