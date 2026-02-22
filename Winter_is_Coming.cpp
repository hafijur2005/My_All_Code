#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int arr[n];
        bool flag[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] < a)
                flag[i] = true;
            else if (arr[i] > b)
                flag[i] = false;
            else
            {
                if (i == 0)
                    flag[i] = false;
                else
                    flag[i] = flag[i - 1];
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (flag[i] && (i == 0 || !flag[i - 1]))
                count++;
        }

        cout << count;
        nl
    }
    return 0;
}
