#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        vector<int> v2;
        if (n != 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (n - v1[i] == 0)
                    v2.push_back(n);
                else
                    v2.push_back(n - v1[i]);
            }
        }
        else
        {
            for(int i=1;i<=2;i++)
            {
                v2.push_back(3 - v1[i-1]);
            }
        }
        for (int i = 0; i < n; i++)
            cout << v2[i] << " ";
        cout << endl;
    }

    return 0;
}