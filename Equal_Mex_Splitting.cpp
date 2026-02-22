#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false),cin.tie(nullptr)
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<"\n";

int main()
{
    fast;
int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        int nonzero = 0;
        for (int v : a) {
            if (v != 0) nonzero++;
        }
        ans = nonzero;

        int limit = sqrt(n) + 1;

        for (int mex = 1; mex <= limit; mex++) {
            vector<int> seen(mex, 0);
            int have = 0, cnt = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] == mex) {
                    fill(seen.begin(), seen.end(), 0);
                    have = 0;
                }
                else if (a[i] < mex) {
                    if (!seen[a[i]]) {
                        seen[a[i]] = 1;
                        have++;
                    }
                    if (have == mex) {
                        cnt++;
                        fill(seen.begin(), seen.end(), 0);
                        have = 0;
                    }
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }

    return 0;
}
