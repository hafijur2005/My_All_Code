#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, oa = 0, ea = 0, ob = 0, eb = 0;
        cin >> n;
        char s1[n], s2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s1[i];
            if (i % 2 == 0 && s1[i] == '1')
                oa++;
            if (i % 2 == 1 && s1[i] == '1')
                ea++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s2[i];
            if (i % 2 == 0 && s2[i] == '1')
                ob++;
            if (i % 2 == 1 && s2[i] == '1')
                eb++;
        }
        // cout << oa + eb << " " << n / 2 << " " << ea + ob << " " << ceill(n / 2.0) << endl;
        if (oa + eb <= n / 2 && ea + ob <= ceill(n / 2.0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}