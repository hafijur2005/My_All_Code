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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> v1(n, 0);
        for (int i = 0; i < n; i++)
        {
            vector<int> v2 = v;
            int a = 0;
            for(int j=0;j<n;j++)
                a+=v2[j];

            int x = i;
            while (1)
            {
                if (v2[x] > 0)
                {
                    v2[x]--;
                    a--;
                    if (a == 0)
                    {
                        v1[x] = 1;
                        break;
                    }
                }
                x = (x + 1) % n;
            }
        }

        int ans = 0;
        for(int i=0;i<n;i++)
            ans+=v1[i];
        cout << ans << "\n";
    }
    return 0;
}