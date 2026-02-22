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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sf[101] = {0};
        for (int s = 2; s <= 100; s++)
        {
            int cnt[101] = {0};
            for (int i = 0; i < n; i++)
                cnt[arr[i]]++;
            int teams = 0;
            for (int i = 1; i <= 50; i++)
            {
                int j = s - i;
                if (j < 1 || j > 50)
                    continue;

                if (i == j)
                    teams += cnt[i] / 2;
                else
                {
                    int pairs = min(cnt[i], cnt[j]);
                    teams += pairs;
                    cnt[i] -= pairs;
                    cnt[j] -= pairs;
                }
            }
            sf[s] = teams;
        }

        sort(sf, sf + 101);
        cout << sf[100];
        nl
    }

    return 0;
}
